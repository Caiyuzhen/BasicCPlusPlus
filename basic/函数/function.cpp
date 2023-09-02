#include<iostream>
#include "utils.h"// 🔥🔥 引入自己定义的头文件
using namespace std;


// // 👇函数声明, 具体实现在其他文件内！！
// string copyStr(string str, int n);


/*
	定义函数 
		1.函数如果不需要返回值, 则定义为 void
		2.函数的返回类型不能是数组或者是函数

*/

// 求平方
int square(int x) { //参数列表
	int y = x * x;
	return y;
}


// 求立方和
int cubeSquare(int x, int y) {
	int res = pow(x, 3) + pow(y, 3); //pow(x, 3)  表示 x 的 3 次方 => 求幂方法
	return res;
}


// 求阶乘
int factorial(int n) {

	// 用来保存阶乘的积
	int res = 1;

	for(int i = 1; i <= n; i++) {
		res = res * i;
	}

	return res;
}




// 声明函数, 但先不具体实现, 这样便可以在 main 函数后再具体实现函数
int callCount();


int main() {
	int n = 6;
	int result = square(n);


	cout << result << endl;
	cout << cubeSquare(5, 7) << endl;
	cout << factorial(5) << endl;
	cout << copyStr("Hey ", 5) << endl;


	for(int i = 0; i < 5; i++) {
		callCount();
	}

	cin.get();
}


/*	返回自身被调用多少次的函数 
		生命周期 != 作用域

		作用域:
			1.全局作用域
			2.局部作用域

		生命周期:
			1.自动对象 -> 系统会自动回收 => 伴随着作用域的结束而结束 => 不做初始化的话, 值可能是随机的, 比如“烫烫烫” => 存放在 Stack 栈区
			2.静态对象 -> 系统不会自动回收 => 生命周期伴随着整个程序的运行而存在 => 会自动初始化为 0 => 存放在静态存储区
*/
int callCount() {
	static int count = 0; //🌟🌟 局部静态变量, 函数销毁后, 仍然存在！！生命周期伴随着整个程序的运行而存在, 很像全局变量
	++count;
	cout << "被调用了: " << count << "次" << endl;
}