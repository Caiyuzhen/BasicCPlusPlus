#include <iostream>
#include <string>
using namespace std;


/*
	函数重载
	1. 同一个作用域下
	2. 函数名相同
	3. 函数参数类型不同，或者个数不同，或者顺序不同
	4. 函数的返回值不可以作为函数重载的条件
	5.系统会根据传入的参数来自动推断选择对应的函数
*/

void abc(int x) {
	cout << x << endl;
}

void abc(int x, int y) {
	cout << x << y << endl;
}



/*	
	1.函数重载(只发生在同一个作用域下):
		特殊的重载, const 形参
			const 本质也是传值参数 => 值的拷贝赋值, 加不加 const 是没区别的, 所以会报错

		特殊的重载, 指针 * 形参
			指针 * 本质也是传值参数 => 值的拷贝赋值, 加不加 * 是没区别的, 所以会报错
			复习: 
				int* p = &i; 相当于指针 p 保存了 i 的地址
				int* const pc = p;

		引用:
			复习:
				🔥🔥 void fun(int &x); 【const 常量值】不能赋值给【普通引用】, 只能赋值给【常量引用】！ => void func(const int &x)

				//🚀常量地址不能赋值给普通指针！！
				int i = 0
				const int ci = i
				int* p = &ci //❌常量地址不能被普通指针来指向！！
				const int* pc = &ci //✅指向常量的指针可以被常量赋值！

	2.函数匹配:
		候选函数 -> 可行函数 -> 最佳匹配(不需要转换)
*/





// 1.函数重载 ————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
void fun(const int x) {
	cout << x << endl;
}


// void fun(int x) { //❌会报错
// 	cout << x << endl;
// }


// void fun(int* x) {  //❌普通指针, 会报错
// 	cout << *x << endl;
// }


// void fun(int* const x) { //❌指针常量, 因为约束的是指针而不是 x , 所以本质是同样的形参, 所以会报错
// 	cout << *x << endl;
// }


void func(int& x) { //✅ 普通引用, 是不同的形参
	cout << x << endl;
}


void func(const int& x) { //✅ 常量引用, 是不同的形参
	cout << x << endl; 
}


void func(const int* x) { // 指向常量的指针, ✅ 因为 const 【🚀约束的是形参所指向】的那个数据对象！！！！ => 底层 const
	cout << x << endl; 
}




// 2.函数匹配 ————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
void f() { cout << 1 << endl;};
void f(int x) { cout << 2 << endl;};
void f(int x, int y) { cout << 3 << endl;};
void f(double x, double y = 1.5) { cout << 4 << endl;};


int main() {
	f(3.14); // 4, 调用了第 4 个函数, 因为 y 有默认值, 所以匹配了 double 浮点类型的函数
	// f(10, 3.14); // 3 跟 4 都可以被匹配, 所以报错 ❌ => 二义性调用
}



