#include <iostream> //# 为预处理程序, 一般都是引入库 io 为控制台操作
using namespace std;//定义命名空间后, 下面就不用写 std:: 了


// 定义函数, void 表示返回值为空
void welcome()
{
	cout << "Input your name~!" << endl;

	//用一个变量来保存输入的值
	string name;

	// >> 为输入运算符, 捕获键盘输入事件
	cin >> name;

	cout << "Welcomes" << name << endl;
}