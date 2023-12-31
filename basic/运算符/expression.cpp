#include<iostream>;
using namespace std;


/*
	关系运算符
		优先级高
			>
			<
			>=
			<=

		优先级低
			==
			!=


	逻辑运算符
		逻辑非
			!
		逻辑与(并且)
			&&
		逻辑或
			||

	短路运算(🔥 左侧能决定结果后，右侧不再执行)
		i = 0
		1 < 2 || i++ // 因为左侧 1 < 2 成立所以不再执行右侧指令, 直接返回左侧结果
		1 < 2 && i++ // 因为左侧 1 < 2 成立所以继续执行右侧指令
		1 > 2 && i++ // 因为左侧 1 > 2 不成立所以不再执行右侧指令

	条件运算符
		i = 0
		1 < 2 ? a : b // 1 < 2 为真，返回 a，否则返回 b
		(1 < 2 && ++i) ? "true" : "false" // 1 < 2 为真，继续执行 ++i, 返回 "true"，否则返回 "false"
		(1 > 2 && ++i) ? "true" : "false" // 1 > 2 不为真，不再执行 ++i，返回 "false"

	逻辑位运算, 因为计算机底层是 0 和 1 , 对应可以表示 true or false
		~ 取反
		& 与
			两个都是 1 (true) 才为 1，否则为 0
		| 或
			只要有一个为 1 (true) 就为 1，否则为 0
		^ 异或
			两个数对应的位相同则为 0，不同则为 1
				巧妙点:
					自己跟自己异或为 0
					自己跟 0 异或为自己

					比如从一组数中找出只出现一次的数

	隐式类型转换
		发生在算数类型之间
			比如【小长度】会转化成【大长度】, 避免精度的丢失
*/


int main() {
	// 逻辑运算
	cout << (1 < 2) << endl; // 1 < 2 为真，输出1
	cout << (1 < 2 && 1 >= 5) << endl;// 1 < 2 为真，1 >= 5 为假，输出0
	cout << (1 < 2 || 1 >= 5) << endl;// 1 < 2 为真，1 >= 5 为假，输出1

	int i = 0;
	i < 2 || i++;
	cout << i << endl; // 输出 0，因为 i < 2 为真，所以不再执行 i++


	// 短路运算
	int j = 0;
	j < 2 && j++;
	cout << j << endl; // 输出 1，因为 j < 2 为真，所以继续执行 j++，所以输出 1

	int k = 0;
	k > 2 && k++;
	cout << k << endl; // 输出 0，因为 k > 2 不为真，所以不再执行 k++，所以输出 0
	  


	// 逻辑位运算 (默认都会扩展成 4 个字节的 int 类型数据) 
	unsigned char abc = 5; // 11111001
	unsigned char def = 12; // 00001100
	cout << ~abc << endl;  // 取反后变成 00000110，输出 -6
	cout << (abc & def) << "二进制为:" << bitset<8>(abc & def)  << endl; // 两个都是 1 才为 1，否则为 0，输出 00000100 => 4
	cout << (abc | def) << endl; // 只要有一个为 1 就为 1，否则为 0，输出 00001101 => 13
	cout << (abc ^ def) << endl; // 两个数对应的位相同则为 0，不同则为 1，输出 00001001 => 9


	// 从一组数中找出只出现一次的数
	int a1 = 5, a2 = 29, a3 = 5, a4 = 18, a65 = 29;
	cout << "只出现一次的是:" << (a1 ^ a2 ^ a3 ^ a4 ^ a65) << endl; // 输出 18, 因此 【自己跟自己异或为 0】, 然后 【自己跟 0 异或为自己】, 所以最后可以找出只出现一次的数


	cout << "————————————————————" << endl;


	// ⚡️隐式类型转换(整数提升, 把较小的数转化为 int, 注意, 小变大没问题, 大赋值给小就会丢失精度)
	// 算数运算中的隐式转换
	short res = 15.8 + 30;
	cout << res << endl; // 45 , 因为被定义为 short 类型(短整型), 占 2 字节, 所以会丢失精度
	cout << 15.8 + 30 << endl; // 45.8 会自动转化为 double 类型, 占 8 字节


	// 关系运算中的隐式转换 , 比如判断 a 是否在 0 < a < 100 内
	int a = -1;
	cout << (false < 100) << endl; // true 会把 false 转化为 0, 然后判断 0 < 100 为 true， 所以为 1
	cout << ((0 < a && a < 100) ? "true" : "false") << endl; // false [正确的写法]
	

	// ⚡️强制类型转换(比如求平均数)
	int total = 20, num = 6;
	double aveRes = total / num;
	cout << "结果为:" << aveRes << endl; // 结果为:3 , 因为 total / num 会先计算 (整数计算), 然后再赋值给 aveRes, 所以会丢失精度

	cout << "强制转化后的结果:" << (double)total / num << endl; // 【C 语言风格】 强制转化后的结果:3.33333 , 因为 (double)total 会先转化为 double 类型, 然后再计算, 所以不会丢失精度
	cout << "强制转化后的结果:" << double(total) / num << endl; // 【C++ 语言风格】 强制转化后的结果:3.33333 , 因为 (double)total 会先转化为 double 类型, 然后再计算, 所以不会丢失精度
	cout << "强制转化后的结果:" << static_cast<double>(total) / num << endl; // 【C++ 底层风格】 强制转化后的结果:3.33333 , 因为 (double)total 会先转化为 double 类型, 然后再计算, 所以不会丢失精度




	cin.get();
}