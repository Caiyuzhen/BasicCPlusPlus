#include<string>
using namespace std;


/*
	👇拆分函数, 分离式编译
*/ 


// 复制字符串
string copyStr(string str, int n) {

	// 用来保存字符串的总数
	string result;

	while(n > 0) { //🚀另一种循环方式, 当 n 还 > 0 时, 正面还可以继续循环复制字符串
		result = result + str;
		--n; //🚀每次循环都减少 n 的值
	}

	return result;
}
