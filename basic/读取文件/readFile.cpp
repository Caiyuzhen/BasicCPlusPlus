#include<iostream>
#include<string>
#include<fstream>
using namespace std;


int main() {
	ifstream inp("./input.txt"); // input file stream
	ofstream out("./output.txt"); // output file stream

	// 1.按【单词】逐个读取
	// string word;//承接读取出来的文字
	// while(inp >> word) {
	// 	cout << word << endl;
	// }


	// 2.按【行】逐个读取
	string line;
	while(getline(inp, line)) {
		cout << line << endl;
		out << line << endl; //🚀写入到 output.txt 文件
	}


	// 3.按【字符】逐个读取
	// char ch;
	// while(inp.get(ch)) {
	// 	cout << ch << endl;
	// }



	// 

	cin.get();
}