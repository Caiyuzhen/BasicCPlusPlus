#include<iostream>
using namespace std;


// 声明多个整数变量
int c = 0;//全局变量默认会有个初始化的过程, 默认是 0, 所以可以不做初始化

int main()
{
	int a = 1, b, c; //最好做局部初始化，不然会报错
	c = 2;

	cout << "a = " << a << endl; // = console.log
	cout << "打印命名空间下的 c = " << ::c << endl;

	cin.get(); //防止一输出就关闭
}