#include<iostream>
using namespace std;


/*
	二分查找（折半查找）:
		1.核心是判断【某个数据】是否在【某个数组】中。
		2.🔥前提是数据已经按照从小到大，或从大到小排列好了  =>  每次折半查找，排除一半的数据。


*/

// 返回值是 target 目标在数组中的索引下标, 如果不存在则返回 -1 false

int search(const int(&a)[10], int start, int end, int target) { //传入数组参数！ start 跟 end 为索引,target 为要找的【目标值】, 因为要用【⚡️递归】的方式来实现, 但数组的长度 int(&a)[10] 限定了为 10, 所以没法砍一半， 所以只能用 start 和 end 来砍一半！
	//递归调用, 首先考虑基准情况, 数组哪没有元素，或者 target 超出了范围, 就表示没有找到, 所以返回 -1
	if(start > end || target < a[start] || target > a[end]) {
		return - 1;
	}

	// 计算中间位置的索引
	int mid = (start + end) / 2; //整数触发, 可能会错一位, 但不影响结果
	// 比较中间位置的【值】跟目标 target 的大小是否一致
	if(a[mid] == target) {
		return mid;
	} else if (a[mid] > target) {
		// 🚀 递归返回传入二分后的数据！ 中间值 mid 比目标值大时:
		return search(a, start, mid - 1, target); // 递归, mid - 1 表示砍掉右边的一半, 只取 start ~ mid - 1
	} else if (a[mid] < target) {
		// 🚀 递归返回传入二分后的数据！ 中间值 mid 比目标值小时:
		return search(a, mid + 1, end, target); // 递归, mid + 1 表示砍掉左边的一半, 只取 mid + 1 ~ end
	}
}


int main(){
	int arr[10] = {1, 5, 8, 12, 17, 22, 28, 48, 87, 99};
	int size = sizeof(arr) / sizeof(arr[0]); // 为了计算 start 跟 end 的值, 所以要先计算数组的长度 
	int targetValue = 870;
	int result = search(arr, 0, size - 1, targetValue); // start = 0, end = size - 1

	// 根据是否找到元素来打印
	result == -1 ? 
		cout << "没有找到元素" << targetValue << endl : 
		cout << "找到了元素" << targetValue << "在数组中的索引下标为: " << result << endl;

	cin.get();
}