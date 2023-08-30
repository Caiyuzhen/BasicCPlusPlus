#include<iostream>
#include<string>
using namespace std;



/*
	指针
		What?
			指针本身也是一个数据对象

			用来存放其他某个数据对象的内存地址 - 间接访问
*/
int main() {
	int* p1; //用指针定义某个数据类型, 可以不做初始化
	long* p2;
	float* p3; // 指向的数据是 float 的数据类型

	cout << p1 << " " << p2 << " " << p3 << endl;
	cout << sizeof(p1) << " " << sizeof(p2) << " " << sizeof(p3) << endl; // 8 -> 因为指向的对象是 64 位系统, 用 8 个字节来存放数据的。  指针的大小跟系统的内存地址空间有关系, 跟指向的数据对象没关系, 因为这个系统是 64 位系统, 所以是 8 字节


	// 去地址操作符 & , 可以捕捉另外一个对象的地址
	int a = 10;
	int b = 20;
	long c = 35;

	p1 = &a; //把 a 的地址拿出来赋值给 p1, 🔥注意类型得对应！！！ int 指针对应 int 变量的地址

	cout << "变量 a 的地址为: " << &a << endl;

}