#include<iostream>
using namespace std;



#define PI 3.14 //【常量的定义方法一, 宏定义】, 会被全局预处理, 会逃过类型检查, 不推荐这么定义


//【常量的定义方法二, Const 限定符定义】, 常量也需要赋初始值, 推荐使用 cont 这种赋值方式
const float pi = 3.14;
const char name[] = "Zeno"; 
const char a = 'a';

int main() {
	cout << pi << name << a << endl;
}