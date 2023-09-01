#include<iostream>
#include<string>
using namespace std;



// 翻转数组
int main() {
	const int n = 8;
	int arr[n] = {1,2,3,4,5,6,7,8};

	// 方法一:
	// 创建新数组, 反向填入
	int newArr[n];
	for(int i = 0; i < n ; i ++) {
		newArr[n - i - 1] = arr[i];
	} 


	// 输出新数组
	for(int res: newArr) {
		cout << res << "\t";
	}

	cout << endl;



	// 方法二:
	// 两个指针, 指向头尾, 每次交换完成就向中间移动 => 双指针法实现数组的翻转(🚀好处: 不用新定义一个数组, 直接改变原数组！)
	int arrU[] = {1,2,3,4,5,6,7,8};

	int head = 0, tail = n - 1; //数组有 n 个索引位, 最后一个索引位为 n - 1
	while(head < tail) {
		//头尾元素对调
		int temp = arrU[head]; // 临时变量, 用于存储头元素
		arrU[head] = arrU[tail];
		arrU[tail] = temp;
		head ++; // 头尾指针同时移动
		tail --; // 头尾指针同时移动
	}

	for(int res: arrU) {
		cout << res << "\t";
	}


	cin.get();
	cin.get();
}