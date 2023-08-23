#include<iostream>;
using namespace std;

/*
	1.先扫描出最小值 [可以全部扫描完就换或者每对每对比较就替换]
	2.把最小（大）值放到数组的最前面
	3.再次扫描出最小（大）值, 放到数组的最前面
*/


// sort functions, 由小到大
int selectionSort() { //选择排序, 每次遍历数组中的最小值, 放到【🌟最前面】
	int arr[] = {5, 9, 2, 7, 4, 3, 12, 6, 1, 5, 7};
	int arrLength = sizeof(arr) / sizeof(arr[0]); //数组的长度

	for(int i = 0; i < arrLength; i++) {
		for(int j = i + 1; j < arrLength; j++) { // j 相当于从第 2 个开始
			if(arr[i] > arr[j]) { //🚀内层比较大小 (小到大或到大小), 生序
				//让 arr[i] 跟 arr[j] 交换位置
				int temp = arr[j]; //先保存【🌟后一个值】
				arr[j] = arr[i]; 
				arr[i] = temp; // 前一个交换为 j 
			}
		}
	}

	// 范围 for 循环
	for(int num: arr) {
		cout << num << "\t";
	}

	cout << endl;
	cin.get();
}


int bubbleSort() { //冒泡排序, 两两相对比, 每次, 把相对较大（小）的值找出来冒泡到最后面（末尾）
	int arr[] = {5, 9, 2, 7, 4, 3, 12, 6, 1, 5, 7};
	int arrLength = sizeof(arr) / sizeof(arr[0]); //数组的长度

	for(int i = 0; i < arrLength; i ++) { // 外层循环(轮数)
		for(int j = 0; j < arrLength - i - 1; j ++) { // 【⚡️内层 j 会循环 arrLength - i - 1 次！越来越少】 - 1 是为了不超出数组,
			if(arr[j] < arr[j + 1]) { // 内层的比较, 降序, 大的在前面,  每次都把最大的值放到最前面 5 9 对比 5 2 对比 ...
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	// 范围 for 循环
	for(int num: arr) {
		cout << num << "\t";
	}

	cout << endl;
	cin.get();

}




int main() {
	selectionSort();
	bubbleSort();

	cin.get();
}