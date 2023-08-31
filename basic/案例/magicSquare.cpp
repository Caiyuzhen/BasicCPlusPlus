#include<iostream>
#include<string>
using namespace std;



// 判断幻方
int main() {

	const int n = 3;

	// 先定义一个二维数组
	int arr[n][n] = {
		{4, 9, 2},
		{3, 5, 7},
		{8, 1, 6}
	};


	// 先计算每行每列的目标和
	int target = (1 + n * n) * (n * n) / 2  / n;//等差数列求和公式 n * n 表示末尾的数
	bool isMagic = true;

	// 检查每一行  => i 行 j 列
	for(int i = 0; i < n; i++) {
		int sum = 0; //叠加总和
		// 遍历第 i 行 (当前行进行叠加)
		for(int j = 0; j < n; j++) {
			sum += arr[i][j];
		}

		// 判断是否等于目标和
		if(sum != target) {
			isMagic = false;
			cout << "不是幻方" << endl;
			break;
		} else {
			continue;
		}
	}

	// 检查每一列  i 行 j 列
	for(int j = 0; j < n; j++) {
		int sum = 0; //叠加总和
		// 遍历第 k 列 (当前列进行叠加)
		for(int i = 0; i < n; i++) {
			sum += arr[i][j];
		}

		// 判断是否等于目标和
		if(sum != target) {
			isMagic = false;
			cout << "不是幻方" << endl;
			break;
		} else {
			continue;
		}
	}

	//  检查对角线
	int sumDiag1 = 0, sumDiag2 = 0;
	for(int i = 0; i < n; i++) { // i 为行号, 每一行
		sumDiag1 += arr[i][i]; //左上到右下, 每个元素位置(行列坐标)加起来 = n 
		sumDiag2 += arr[i][n - 1 - i]; //右上到左下, 每个元素位置(行列坐标)加起来 = n - 1
	}

	// 判断是否等于目标和
	if(sumDiag1 != target || sumDiag2 != target) {
		isMagic = false;
		cout << "不是幻方" << endl;
	} 


	// 输出最终结果
	cout << (isMagic ? "是" : "不是") << n << "阶幻方" << endl;
}