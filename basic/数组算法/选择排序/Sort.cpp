#include<iostream>;
using namespace std;

/*
	1.先扫描出最小值 [可以全部扫描完就换或者每对每对比较就替换]
	2.把最小（大）值放到数组的最前面
	3.再次扫描出最小（大）值, 放到数组的最前面
*/


// sort functions
int sort() {
	int arr[] = {5, 9, 2, 7, 4, 3, 12, 6, 1, 5, 7};

	int arrLength = sizeof(arr) / sizeof(arr[0]); //数组的长度

	for(int i = 0; i < arrLength; i++) {
		for(int j = i + 1; j < arrLength; j++) { // j 相当于从第 2 个开始
			if(arr[i] < arr[j]) { //🚀比较大小
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

	cout endl;
	cin.get();
}

int main() {
	sort();

	cin.get();
}