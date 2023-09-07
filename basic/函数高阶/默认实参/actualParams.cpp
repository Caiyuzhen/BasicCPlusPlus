#include <iostream>
#include <string>
using namespace std;

/*	
	默认实参
		比如默认是汉族、默认是某某地区等等
*/

string stuInfo(string name = "untitle", int age = 18, double score = 60) { //🔥C++ 规定一个形参有默认值后, 后续的形参都需要有默认值！！
	string info = "name: " + name + "\t age: " + to_string(age) + "\t score: " + to_string(score); //🚀 to_string() 表示将 int 数字类型转换为 string 字符串类型！
	return info;
}

int main() {
	cout << stuInfo("Jimmy", 22, 99);

	cout << endl;

	cout << stuInfo("Kim", 32); //可以不传后面的一个值

	cout << endl;

	cout << stuInfo();

	cin.get();
}