#include<iostream>;
using namespace std;

/*
	1.先扫描出最小值 [可以全部扫描完就换或者每对每对比较就替换]
	2.把最小（大）值放到数组的最前面
	3.再次扫描出最小（大）值, 放到数组的最前面
*/


/*
	选择排序 -- 最小/大的值跟所有的比较  =>  把最大/小的直接放最后
	冒泡排序 -- 最小/大的值跟相邻的比较  =>  把最大/小的慢慢挪到最后
*/ 


// sort functions, 由小到大
int selectionSort() { //选择排序, 👉每次遍历找出数组中中的最小值, 放到【🌟最前面】 => ⚡️arr[i] 为每组循环的第一个值,  arr[j] 为每组循环的第 2 ~ n 个值⚡️
	int arr[] = {5, 9, 2, 7, 4, 3, 12, 6, 1, 5, 7};
	int arrLength = sizeof(arr) / sizeof(arr[0]); //数组的长度

	for(int i = 0; i < arrLength; i++) {
		for(int j = i + 1; j < arrLength; j++) { // j 相当于从第 2 个开始
			if(arr[i] > arr[j]) { //🚀内层比较大小【相当于每次对比 arr[i] 跟 arr[i + 1], 哪个小就赋值给 temp 赋值】 (小到大或到大小), 生序
				//让 arr[i] 跟 arr[j] 交换位置
				int temp = arr[j]; //先保存【🌟小的那个个值】, 然后拿着这个值跟剩余的内容再做比较 【📺可视化:】 https://visualgo.net/zh/sorting
				arr[j] = arr[i]; 
				arr[i] = temp; // 前一个交换为 j 【j 是比较小的那个】, 交换过后就开始比较 i+1 了
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
			if(arr[j] < arr[j + 1]) { // 内层的比较, 降序, 大的在前面,  每次都把最大的值放到最前面 5 9 对比 5 2 对比 ... => ⚡️ arr[j] < arr[j + 1] 相当于每次比较自己相邻的数 ⚡️
				int temp = arr[j];  // 【📺可视化:】 https://visualgo.net/zh/sorting
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