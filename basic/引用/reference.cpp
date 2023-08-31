#include<iostream>
#include<string>
using namespace std;

/*
	引用
		因为指针的使用比较麻烦, 用引用更方便 => 类似给某个数据增加一个别名

		引用的本质不是变量, 【🔥引用本身不存放数据】, 只是某个变量的【快捷方式】, 内存中没有引用的存储空间

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




	/*
		引用跟指针常量的关系 
			绑定指向后, 都不能够更改【指向】
	*/ 
	int uuu = 88;
	int& ref2 = uuu; // 引用别名
	int* const ppp2 = &uuu; // 指针

	ref2 = 999; // 使用别名来修改
	cout << "uuu 的值: " << uuu << endl;
	*ppp2 = 666;// 使用指针来修改 (解引用)
	cout << "uuu 的值: " << uuu << endl;



	// 绑定指针的引用
	int QQ = 678;
	int* uu = &QQ;
	int*& ref9 = uu; // 🚀定义一个引用, 绑定的是指针的内存地址
	*uu = 889; // 用指针来重新赋值
	cout << QQ << endl;


	// 指向引用的指针 (不支持！)
	int KLK = 999;
	int& ref6 = KLK; // 引用别名
	// int* pt = ref6; //指向引用的指针（不支持！因为引用本身没有定义内存空间）





	cin.get();
	cin.get();
};