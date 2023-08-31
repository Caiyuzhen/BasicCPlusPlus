#include<iostream>
#include<string>
using namespace std;

/*
	引用
		因为指针的使用比较麻烦, 用引用更方便 => 类似给某个数据增加一个别名

		引用的本质不是变量, 本身不存放数据, 只是某个变量的【快捷方式】

		🔥因为引用本身不是一个数据对象, 所以不存在说什么常量变量类型的引用
*/ 

int main() {
	// 变量的引用
	int a = 10, b = 25;
	int& ref = a; // aa 相当于是 a 的快捷键方式

	ref = 9; //操作引用 aa, 也相当于操作了 a
	cout << "a 的值: " << a << endl;


	ref = b; //相当于让 a = b
	cout << "a 的值: " << a << endl;


	
	
	// 常量的引用
	const int abc = 99;
	const int& ppp = abc;
	cout << "ppp 的值: " << ppp << endl;

	
	int nnn = 888;
	const int& kkk = nnn;// 常量可以用变量来赋值
	cout << "kkk 的值: " << kkk << endl;

	cin.get();
	cin.get();
};