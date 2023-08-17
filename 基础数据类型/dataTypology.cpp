#include<iostream>;
using namespace std;

/*
	30   十进制
	036  八进制, 相当于十进制的 30
	0x1E 十六进制, 相当于十进制的 30  =>  E 表示 4,  计算方法: 1 * 16^1 + 14 * 16^0 = 30  （任何数的0次方都等于1） =>  在十六进制系统中，每个数字位可以表示 0-9 和 A-F（或 a-f），分别对应十进制的 0-15
*/

/*
	算数类型 (默认为 int)
		整型
			一般整型
				bool - 布尔 (一般为 1 字节,  根据编译器的不同而异) 
				char - 字符 (一般为 1 字节, 8 位比特)       --- 扩充: 1 个字节可以表示 2^8 次方 （一个字节是由8个二进制位（bit）组成的，每个二进制位可以表示0或1两个状态）, 有 256 个数据, 或者 -128 ~ 127
				short - 短整型 (一般为 2 字节, 16 位比特)   --- 扩充: 这样 short 就可以表示 2^16 次方, 有 65536 个数据, 或者 -32768 ~ 32768
				int - 整型(一般为 4 字节, 32 位比特)        ---  扩充: int 一般为 4 字节,  win7\win19\MacOS 系统中 int 都是 32 位的
				long - 长整型(一般为 4 字节, 32 位比特)     ---  扩充: 因为和 int 的一般字节数相同都为 4 个字节, 所以 C++11 后扩充了 long long 类型
				long long - 更长的整型(一般为 8 字节, 64 位比特)
				chart16_t - 字符的扩容, 汉字占的内存比较多（一般为 8 字节, 64 位比特）
				chart32_t - 字符的扩容, 汉字占的内存比较多（一般为 16 字节, 128 位比特）

			无符号整型（不需要负数, 这样能够表示更多的数据）
				unsigned char - 无符号字符
				unsigned short - 无符号短整型
				unsigned int - 无符号整型
				unsigned long - 无符号长整型
				unsigned long long - 无符号更长的整型

		浮点类型
			float - 单精度浮点型 (一般为 4 字节, 32 位比特)
			double - 双精度浮点型 (一般为 8 字节, 64 位比特)
*/


// 一般使用 int 跟 longlong 就足够了, 不能为负数的话, 就使用 unsigned int 跟 unsigned longlong



int main() {
	// 👇定义变量而非常量～
	bool isDark  = false; // 布尔类型
	char z = 65; //🔥 ASCII 码, 65 表示 A, 等价于 'A' => 🔥注意耽搁字符是单引号!
	char k = '\''; //转译字符 \ , 能够打印 '
	char k = 'a\nb'; //转译字符 \n , 能够回车换行
	char color = 'r'; // 字符类型, 需要用 ‘’ 单引号！
	char colors[] = "rgba"; // 字符串, 需要用 “” 双引号！ =>  字符串就是字符的数组
	short a = -20; // 短整形
	int b = -100; // 整形, 不能超过 32768 个数据, 不然会数据溢出
	short bbb = 99999; // ⚠️ 不能超过 32768 个数据, 不然会数据溢出, 就会回退！
	long c = 100000000; // 长整形
	long long d = 10000; // 更长的整形
	
	float f = 3.14; //单精度
	double pi = 99999999; //双精度

	cout << isDark << "长度为" << sizeof isDark << endl;
	cout << z << "长度为" << sizeof z << endl; // A 
	cout << z+1 << "长度为" << sizeof (z+1) << endl; // B = A + 1 = 65 + 1 = 66, 对应的 ASCII 码为 66
	cout << color << "长度为" << sizeof color << endl;
	cout << a << "长度为" << sizeof a << endl;
	cout << b << "长度为" << sizeof b << endl;
	cout << bbb << "长度为" << sizeof bbb << endl;
	cout << c << "长度为" << sizeof c << endl;
	cout << d << "长度为" << sizeof d << endl;

	cout << f << "长度为" << sizeof f << endl;
	cout << pi << "长度为" << sizeof pi << endl;
}



/*
	空类型
*/
void kkk() {
	//...
}