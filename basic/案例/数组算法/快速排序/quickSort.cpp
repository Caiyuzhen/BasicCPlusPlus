#include<iostream>
using namespace std;


/*
	⚡️找到支点数据(取第一个或者随机), 【【⚡️支点前的数据都比它小, 支点后的数据都比它大！⚡️】】
		设定头尾指针（👀不是 C++ 的指针）！, 先做一次交换, 然后头指针向后递归判断是否比支点值大, 直到跟尾指针相遇, 然后判断【相遇点】是否比支点值大
		每次进行分区, 当无法分区时, 则完成排序
*/


// 👋 交互数组中两个元素的方法
void swap(int (&arr)[10], int x, int y) {
	int temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}


// 可视化参考: https://www.bilibili.com/video/BV1vP411g7J3/?spm_id_from=333.337.search-card.all.click&vd_source=b67f9398d85e7e297041f47a430b16cb
// ✈️ 单独拆分出来的分区函数 => 需要返回分区支点最终的下标索引信息！以便知道从数组的哪里开始分割
int partition(int (&arr)[10], int start, int end) {
	// 1.选区支点 => 数组第一个
	int pivot = arr[start];

	// 2.指定指向数组头尾两个元素的指针（👀不是 C++ 的指针）！
	int left = start, right = end; // 刚开始就是 start 跟 end

	// 3. 头尾各自向中央移动(右放大, 左放小) （🚀如果是左撞到右边, 说明之前的值都比支点小; 如果是右撞到左边, 说明当前撞到的值比支点大）
	while(left < right) {
		// 🔥🔥（左指针不断向右移, 直到找到比支点大的值）左指针指向的元素【👀比支点大】时, 才跟右边支点元素互换, 如果比支点值小, 就一直向右移(小于右指针时) , 直到撞到右指针=> 因为要不停的换, 所以用 while 循环
		while(arr[left] <= pivot && left < right) { // while 循环才能不停的移动, 直到找到比支点更大的元素
			++left; // 增加左指针的索引位
		}

		// 🔥🔥 （右指针不断向左移, 直到找比支点小的值）右指针指向的元素【👀比支点小】时, 
		while(arr[right] >= pivot && left < right) {
			--right; // 减少右指针的索引位
		}

		// 👋👋 让找到的对应值（左比支点大、右比支点小）指针的左右互换(封装好方法了)
		swap(arr, left, right);
	}


	// 4. 判断左右指针【相遇】位置比支点大还是小, 然后再看把相遇点移到左还是右 （🚀如果是左撞到右边, 说明之前的值都比支点小; 如果是右撞到左边, 说明当前撞到的值比支点大）
	// 🚀🚀 相遇时 left = right, 【🚀🚀头尾相遇则完成一次分区！！！】相遇停下来的位置就是指点值需要放置的位置！！ 🚀
	if(arr[left] <= pivot) { // 比支点小或者等于支点, 就把【相交点】换到头（🔥支点）的位置
		swap(arr, start, left); //一开始 arr[start] 就是 pivot, left 是当前指针相遇位置的值
		return left; // 🚀🚀🚀 返回支点 pivot 最终需要去到的位置
	} 
	else if(arr[left] > pivot) {  // 比支点大, 就把 【相交点 的 前一个位置的元素】换到数组的头（🔥支点）位置
		swap(arr, start, left - 1);
		return left - 1;
	}
}





// 🔥 因为最终要改变数组, 所以不能是 const !
void quickSortFn(int (&arr)[10], int start, int end) { // 传入数组的引用, 行参名 a, start, end 为头尾的指针
	//本质还是递归, 定义停止递归的【基准情况】
	if(start >= end) { //重合, 只剩一个元素
		return;
	}

	// 选区支点进行分区(分区单独包装成一个函数) => 可以得到【⚡️分区支点最终移动到的点】一个下标索引
	int mid = partition(arr, start, end);
	
	//递归调用, 对两部分别继续排序, 左边的部分都比支点小, 右边的部分都比支点大
	quickSortFn(arr, start, mid - 1); // 递归范围: start ～ 支点左移动一位 
	quickSortFn(arr, mid + 1, end); // 支点向右移动一位 ~ end
}




// 👀 最终打印数组的方法
void printArray(const int(&arr)[10]) {
	for(int res: arr) {
		cout << res <<  "\t";
	}
	cout << endl;
}



int main() {
	int arr[10] = { 23, 45, 18, 6, 11, 19, 22, 18, 12, 9 };
	int size = sizeof(arr) / sizeof(arr[0]); // 得到数组的总长度

	// 进行排序
	quickSortFn(arr, 0, size - 1); // size - 1 为结束位置的指针

	// 打印排好序的数组
	printArray(arr);

	cin.get();
}