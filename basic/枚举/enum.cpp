#include<iostream>
#include<string>
using namespace std;


enum WEEK { // 【默认】的枚举量的值从 0 开始依次增加
	Mon, // = 0
	Tue, // = 1
	Wed, // = 3
	Thu = 10, // 可以直接定义值
	Fri, // 11
	Sat,
	Sun
};


int main() {
	// 赋值定义的方式
	WEEK aha = Mon; // WEEK 相当于是 aha 的类型
	WEEK kkk = Tue;

	// 只用强制转化的方式进行赋值
	WEEK uuu = WEEK(299);

	cout << aha << " " << kkk << " " << uuu << endl;
}