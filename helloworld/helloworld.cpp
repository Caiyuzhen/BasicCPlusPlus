#include <iostream> //# 为预处理程序, 一般都是引入库 io 为控制台操作
using namespace std;//定义命名空间后, 下面就不用写 std:: 了


int main() //主函数, 只有一个 main 函数, 返回值是 int 整数
{
	 cout << "😄 Hello World~!!" << endl; //std::cout 为 iostream 里边的一个标准输出对象, std 为命名空间
    // std::cout << "😄Hello World" << std::endl; //std::cout 为 iostream 里边的一个标准输出对象, std 为命名空间

	// system("pause"); //系统底层的暂停, 一般不会调用到
	cin.get(); //cin 为输入流, get() 为获取一个字符
}