#include<iostream>
#include<string>
using namespace std;

 /*
 	🔥 旋转图片
		本质就是在处理二维数组的旋转, 因为图片本质上也是一组二维像素
*/

int main() {
	const int n = 4;
	int image[n][n] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};


	// 1.矩阵转置 (对角翻转）)
	for(int i = 0; i < n; i ++) { // i 为行号, 遍历行
		for(int j = 0; j <= i; j++) { // j 为列号, j <= i 表示是遍历下半三角形, 避免翻转后右翻转过去
			// 以对角线为轴, 两边元素进行互换
			int temp = image[i][j]; // 临时变量	
			image[i][j] = image[j][i];
			image[j][i] = temp;
		}
	}

	// 2. 前后翻转
	for(int i = 0; i < n; i ++) { //遍历所有行
		for(int j = 0; j < n / 2 ; j ++) { // n / 2 表示遍历前半组数组 {}
			// 前后调换
			int temp = image[i][j];
			image[i][j] = image[i][n - 1 - j];//- j 是因为每次都是对称的, 从后往前遍历, 每次往内缩一下
			image[i][n - 1 - j] = temp;
		}
	}


	// 3. 输出结果
	for(int i = 0; i < n; i ++) {
		for(int k = 0; k < n; k ++) {
			cout << image[i][k] << "\t";
		}
		cout << endl;
	}

	cin.get();
}