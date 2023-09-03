#include<iostream>
using namespace std;



/*
	传入数组
		数组不允许直接拷贝, 如果数组要作为函数的形参, 则可以用指针来指向数组(⚡️因为数组的地址默认为数组的第一项)
*/ 



// Case: 传入数组指针并进行打印
// 🤔️如何获得数组长度来进行遍历？
// 方法 1. 规定结束标记, 比如 C 语言风格都是以字符串 \0 作为结束标记 (❌比较麻烦, 不推荐使用)
	

// 方法 2. 把数组长度作为形参 
void printArr(const int* arr, int size) { // 等价于 (int arr[]), 因为底层都是指针, 指向数组的第一个元素;  size 表示数组的长度
	for(int i = 0; i < size; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}



// 方法 3. 传入数组的引用 (✅方便, 推荐使用)
void printArr2(const int(& arr)[9]) {
	// 范围 for 循环
	for(int num: arr) { // 🔥直接使用数组的长度作为循环的范围(num 数量)
		cout << num << "\t";
	}
	cout << endl;
}




int main() {
	// 方法 2. 把数组长度作为形参 (✅方便, 推荐使用)
	int superArr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	printArr(superArr, 9);

	// 方法 3. 传入数组的引用
	printArr2(superArr);


	cin.get();
}