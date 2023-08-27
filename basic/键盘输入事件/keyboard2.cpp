 #include<iostream>;
 #include<string>;
using namespace std;


 int main() {
	// // 1.读取单个单词, 遇到换行符、空格、制表符结束
	// string str1, str2;
	// cin >> str1 >> str2; //cin 只能单个单个单词的进行输入
	// cout << str1 << str2 << endl;



	// 2.读取整行内容, 遇到换行符结束 (常用)
	string str3;
	getline(cin, str3); // cin 为输入流对象, str3 为存储的字符串对象
	cout << "输入了: " << str3 << endl;


	// // 3.读取单个字符
	// char ch;
	// ch = cin.get(); //只捕获一个字符, 可以捕捉回车换行、标点符号
	// cout << ch << endl;


	// 4.用 cin.get() 读取整行内容 (比较少用)
	char str[20];
	cin.get(str, 20); // 读取 20 个字符, 但是会丢弃回车换行符
	cout << "输入了 " << str << endl;

	cin.get(); //因为回车会被丢弃, 所以不用多写一个
	cin.get();
 }