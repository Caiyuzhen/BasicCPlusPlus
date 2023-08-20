#include <iostream>;
using namespace std;



// Case: 包装成判断质数的函数函数, 返回是否是质数的布尔 ********************************************
bool isPrime(int num) { //传入数字参数,  std::optional<bool> 表示即可能返回布尔, 也可能不返回值
	int i = 2;

	// 不能是负数跟小于 1 的数
	if (num <= 1) {
		cout << "不能输入负数或小于 1 的数" << endl;
		return false;
	}

	while(i < num) { // 相当于每个输入的 num 都会跟 i ～ num 做一次取余的除法, 所以最终会除到自己 （相当于暴力破解）
		if (num % i == 0) { // 🔥🔥 【对于两个正整数 a 和 b,a % b 的结果一定在 0 到 b-1 之间】
			return false; // 能被整除就不是质数
		}
		++i;
	}

	return true;
}



// Case: 猜数字游戏 ************************************************************************
void guessNum() {
	int heart = 5; //能猜 5 次的生命
	srand(time(0));// 随机数种子, time（0） 为当前时间
	int randomNum = rand() % 10 + 1; // 1 ~ 10 的随机数,  // 🔥🔥 【对于两个正整数 a 和 b,a % b 的结果一定在 0 到 b-1 之间】, rand() 随机生成值, 最大为 32767
	int guessNum; // 用户猜的数字

	while(heart >= 1) {
		cout << "\n" << "👀 猜猜这次生成了什么数字" << endl;
		cin >> guessNum;

		if(guessNum == randomNum) {
			cout << "🎉 恭喜你猜对了!" << endl;
			break;
		} 
		
		else {
			heart -= 1;
			
			if(heart == 0) {
				cout << "🤖️ 游戏结束, 你的生命值用完了, 欢迎下次再来～" << endl;
				return;
			}

			if(guessNum > randomNum) {
				cin.clear();// 清空 guessNum, 然后回到上面再赋值！
				cout << "❌ 猜大了, 你还有"  << heart << "次机会" << "\n" << endl;
			} else if (guessNum < randomNum) {
				cin.clear();// 清空 guessNum, 然后回到上面再赋值！
				cout << "❌ 猜小了, 你还有"  << heart << "次机会" << "\n" << endl;
			}
		}
	}

	return;
	cin.get(); //保持住窗口
	cin.get(); //捕捉回车换行符, 然后继续保持等待
}



// Case: 绘制爱心曲线 ************************************************************************
int drawStar() {
	//爱心曲线方程 (x^2 + y^2 - a)^3 - x^2 * y^3 = 0
	double a = 1;

	// 定义绘图边界 1.3 倍的 √a => 一个正方形
	double bound = 1.3 * sqrt(a); //sqrt 表示平方根

	//x 、y 的变化步长
	double step = 0.05;

	// 二维扫描所有点的过程（双重 for 循环）
	for(double y = bound; y >= - bound; y -= step) { //垂直扫描 => y
		// 水平扫描 => x
		for(double x = -bound; x <= bound; x += 0.5 * step) { //让 x 更宽一点
			// 带入方程式, 计算当前点是否在爱心内部
			double res = pow(( pow(x, 2) + pow(y, 2) - a ), 3)  - pow(x, 2) * pow(y, 3);    //pow 表示幂函数
			if(res <= 0) { //🚀在曲线内
				cout << "*"; //在心号内部
			} 
			else {
				cout << " "; //在外部
			}
			cout << endl; //🚀 换行
		}
	}

	cin.get();
}



int main() {

	// 判断一个数是否为质数 (除了 1 跟自身之外能不能有可以被除以的因素 ) ————————————————————————
	// cout << "输入一个自然数:" << endl;

	// int num;

	// cin >> num; //把键盘输入的结果给到 num

	// bool isTrue = true; // 假设不是质数
	// int i = 2;

	// while(i < num) { // 相当于每个输入的 num 都会跟 i ～ num 做一次取余的除法, 所以最终会除到自己 （相当于暴力破解）
	// 	if (num % i == 0) {
	// 		// 能被整除就不是质数
	// 		isTrue = false; // 不是质数
	// 		break; // 跳出最近的循环
	// 	}
	// 	++i;
	// }

	// if(isTrue) {
	// 	cout << num << "是质数" << endl;
	// } else {
	// 	cout << num << "不是质数" << endl;
	// }

	// cin.get();
	// cin.get();



	// 包装成函数后 ————————————————————————
	cout << "输入一个自然数:" << endl;
	int num;
	cin >> num; 

	if (isPrime(num)) {
		cout << num << "是质数" << endl;
	} else {
		cout << num << "不是质数" << endl;
	}
	

	guessNum();

	drawStar();

	cin.get();
	cin.get();
}







