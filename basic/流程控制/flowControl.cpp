#include<iostream>;
using namespace std;

/*
	线性语句

	条件分支语句 (if, switch)

	条件循环语句 (while, do while, for)

*/

int main() {


	// 条件分支语句 ————————————————————————————————————————————————————————————————————————
	// if 语句
	int age; 
	cout << "Please input your age" << endl;

	cin >> age;	// 把 cin 拿到的用户键盘输入的值赋值给 age

	if(age > 18) {
		cout << "✅ You are an adult" << endl;
		if(age < 35) {
			cout << "👍 You are young!" << endl;
		} else {
			cout << "🙋 You are old!" << endl;
			}
	} else {
		cout << "❌ You are a child" << endl;
	}


	if(age < 18 ) {
		cout << "❌ You are a child" << endl;
	} else if (age < 35) {
		cout << "👍 You are young!" << endl;
	} else if(age > 35) {
		cout << "🙋 You are old!" << endl;
	}



	// 条件运算符语句
	age >= 18 ? cout << "✅ You are an adult" << endl : cout << "❌ You are a child" << endl;


	// switch 语句
	int score;
	cout << "Please input your score" << endl;
	cin >> score;

	switch(score) { // > 5 分, 4 分， < 3 分 三种情况
		case 5:
			cout << "成绩为 A" << endl;
			break;
		case 4:
			cout << "成绩为 B" << endl;
			break;
		case 3:
			cout << "成绩为 C" << endl;
			break;
		case 2:
			cout << "成绩为 D" << endl;
			break;
		case 1:
			cout << "成绩为 E" << endl;
			break;
		default:
			cout << "请输入分数" << endl;
			break;
	}


	// 条件循环语句 ————————————————————————————————————————————————————————————————————————
	// while 循环
	int aa = 1;

	while(aa < 10) {
		cout << aa << endl;
		aa++;
	}


	// do while 循环
	do {
		cout << aa << endl;
		aa--;
	} while(aa >= 0); // while 循环退出的条件



	// 经典 for 循环
	for(int i = 0; i < 10; i++) {
		cout << i << endl;
	}
	
	// 范围 for 循环 C++ 11 以上才支持
	// for(int num: {1, 2, 6, 23, 64, 129}) { //⚡️ 循环序列内容, num 依次取序列内的元素
	// 	cout << num << endl;
	// }
	


	// 嵌套循环
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 5; j++) { //🔥内层循环执行 3 X 5 = 15 次
			cout << i << " " << j << endl;
		}
	}

	// 嵌套循环的例子 - 99 乘法表
	for(int X = 1; X <= 9; X++) {  // Y 为列, X 为 行
		for(int Y = 1; Y <= X; Y++) {
			cout << Y << " X " << X << " = " << X * Y << "\t"; // \t 为制表符, 把每行输出的内容隔开(添加空格) 
		}
		cout << endl;// 换行符(形成三角形)
	}



	// break 跳出当前循环!
	for(int K = 0; K < 10; K++)  {
		if(K == 5) {
			break; // 当 K = 5 时, 终止循环
		}
		cout << K << endl;
	}


	// 🌟 continue 跳过本次循环 (只能用在循环当中), 比如逢 7 跳过
	for(int L = 0; L < 100; L++) {
		cout << "\t"; //直接输出制表符

		// 7 的倍数， 或者数字当中有 7 则跳过
		if(L % 7 == 0 || L % 10 == 7 || L / 10 == 7) { // L % 10 => 个数为 7   ;   L / 10 => 十位为 7
			continue; //跳过
		}

		cout << L;

		if(L % 10 == 0) {// 每 10 个数字换一行
			cout << endl << endl; //换 2 行
		}
	}




	// 🌟 goto 语句, 任意一条语句都可以设置一个跳转标签 => 比如 begin: int a = 0
	int xxL = 0;

	begin: 
		cout << "开始执行 < 5 的数..." << endl;

	do { 
		cout << xxL << endl;
		xxL++;

		if(xxL < 5) {
			goto begin; // 跳转到 begin 标签处
		} else {
			cout << "结束..." << endl;
	}
	} while(xxL < 10);


	// 终止运行 return 0 
	// return 0;



	cin.get();	// 防止程序一闪而过
}