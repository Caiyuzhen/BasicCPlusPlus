#include<iostream>;
#include<vector>;
using namespace std;


/*
	Vector 只做为一个容器, 不是具体的数据类型
		因此可以给容器添加数据, 而数组不行

		不固定长度, 可以使用 Vector , 固定长度, 使用数组
*/

int main() {
	// 第 1 步
	// 【方法一】默认初始化, 在 vector 容器中定义即初始化, 可以为空
	vector<int> vl;

	// 【方法二】拷贝初始化 (把列表复制给了容器)
	vector<char> vlA = {'a', 'b', 'c', 'd', 'e', 'f'};
	vector<char> vlB{'a', 'b', 'c'}; //省略的写法

	// 【方法三】直接初始化
	vector<short> vlC(5); //相当于创建了 5 个短整型的元素, 内容为 0 
	vector<long> vlD(5, 199); //相当于创建了 5 个长整型的元素, 内容为 199 


	// 第 2 步
	cout << vlD[3] << endl; //输出单个元素


	// 遍历方法一
	for(int i = 0; i < vlA.size(); i++) { // vlA.size() 能够直接获得数组长度
		cout << vlA[i] << "\t";
	}
	cout << endl;


	//遍历方法二
	for(char res: vlA) {
		cout << res << "\t";
	}
	cout << endl;


	// 添加元素
	vlA.push_back('z'); //在数组末尾添加元素


	//添加倒序元素
	vector<int> SmartArr = {88, 99};

	for(int i = 10; i > 0; i--) {
		SmartArr.push_back(i);
	}
	for(int res: SmartArr) {
		cout << res << "\t";
	}
	cout << endl;

	cin.get();
}