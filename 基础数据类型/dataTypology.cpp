#include<iostream>;
using namespace std;

/*
	算数类型 - 整型
		bool - 布尔 (最小字节根据编译器的不同而异)
		char - 字符 (最小为 1 字节, 8 位比特)
		short - 短整型 (最小为 2 字节, 16 位比特)   --- 扩充: 这样 short 就可以表示 2^16 次方, 有 65536 个数据, 或者 -32768 ~ 32768
		int - 整型(最小为 2 字节, 16 位比特)        ---  扩充: int 一般为 4 字节,  win7\win19\MacOS 系统中 int 都是 32 位的
		long - 长整型(最小为 4 字节, 32 位比特)     ---  扩充: 因为和 int 的一般字节数相同都为 4 个字节, 所以 C++11 后扩充了 long long 类型
		long long - 更长的整型(最小为 8 字节, 64 位比特)
*/



int main() {
	// 👇定义变量而非常量～
	bool isDark  = false; //布尔类型
	char color = 'r'; //字符类型, 需要用 ‘’ 单引号！
	char colors[] = "rgba"; //字符串, 需要用 “” 双引号！
	short a = 20; //短整形
	int b = 100; //整形
	long c = 1000; //长整形
	long long d = 10000; //更长的整形

	cout << isDark << "长度为" << sizeof isDark << endl;
	cout << color << "长度为" << sizeof color << endl;
	cout << a << "长度为" << sizeof a << endl;
	cout << b << "长度为" << sizeof b << endl;
	cout << c << "长度为" << sizeof c << endl;
	cout << d << "长度为" << sizeof d << endl;
}



/*
	空类型
*/
void kkk() {
	//...
}