#include<iostream>;
#include<vector>;
using namespace std;


/*
	Vector 只做为一个容器, 不是具体的数据类型
*/

int main() {
	// 定义, 在 vector 容器中定义即初始化, 可以为空
	vector<int> vl;

	// 拷贝初始化 (把列表复制给了容器)
	vector<char> vl2 = {'a', 'b', 'c', 'd', 'e', 'f'};
	vector<char> vl3{'a', 'b', 'c'}; //省略的写法

	// 直接初始化
	vector<short> vl5(5); //相当于创建了 5 个短整型的元素, 内容为 0 
	vector<long> vl6(5, 199); //相当于创建了 5 个长整型的元素, 内容为 199 
}