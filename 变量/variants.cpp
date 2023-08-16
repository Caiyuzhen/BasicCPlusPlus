#include<iostream>
using namespace std;


// 声明多个整数变量
int main()
{
	int a = 1, b, c; //最好做局部初始化
	cout << "a = " << a << endl;

	cin.get(); //防止一输出就关闭
}