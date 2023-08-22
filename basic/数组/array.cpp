#include<iostream>
using namespace std;


int main() {
	int arr[5] = {1, 2, 3, 4, 5}; //需要定义数组的【类型】跟【长度 (option)】


	// 🚀定义数组的长度需要用【常量】而不能用变量！
	const int n = 7;
	float arr2[] = {1.2, 2.3, 3.21, 4.17, 5.24, 6.86, 7.31}; //数组长度不填的话可以背推断出来

	// 如果初始值少于长度， 剩余元素都会变为 0 
	int arr3[5] = {1, 2, 3}; // arr3 = {1, 2, 3, 0, 0}

	// 不能用一个数组给另一个数组赋值

	// 默认填充值为 0xcc (十六进制)  二进制为 11001100



	// 访问数组 ************************************************************
	cout << "数组数量:"  << arr[2] << endl;

	// 🌟 获取数组长度的方法 = 数组所占空间 / 每个元素所占空间（比如 int 类型占 4 个空间)  =>  或者是 / 数组[0] , 因为第一个元素肯定存在
	cout << "数组长度:" << sizeof(arr) / sizeof(arr[0]) << endl;

	// 🔥 遍历访问所有元素【方法一】
	int length = sizeof(arr) / sizeof(arr[0]);
	for(int i = 0; i < length; i ++) {
		cout << "a[" << i << "] = " << arr[i] << endl;
	}


	// 🔥 遍历访问所有元素 【方法二, C++11 以上提供, 但没法捕获下标】
	for(int num : arr)  {
		cout << num << endl;
	}

	cin.get();
}
