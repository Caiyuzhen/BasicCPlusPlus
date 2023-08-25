#include<iostream>;
#include<string>; //最好引入 string , 以便完整使用 string 库

using namespace std;


int main() {
	// 默认初始化
	string s1;

	// 拷贝初始化
	string s2 = "hello";
	string s3 = s1;

	// 直接初始化
	string s4("hello");
	string s5(5, 'h');  //直接初始化 5 个字符

	// 访问字符串 
	cout << s5 << endl; // hhhhh

	// 访问某个字符
	cout << s4[1] << endl; // e

	// 修改某个字符
	s4[0] = 'H';
	cout << s4<<endl;

	// 获取字符串长度
	cout << s4.size() << endl; // 4

	// 获取最后一个字符
	cout << s4[s4.size() - 1] << endl;

	// 增加字符
	s4.push_back('z');
    cout << "增加了字符" << s4 << endl;

    // 删除字符
    s4.pop_back();
    cout << "删除了字符" << s4 << endl;

	// 遍历字符串
	for(int i = 0; i < s4.size(); i ++) {
		// 转化为大写
		s4[i] = toupper(s4[i]);
	};
	cout << s4 << endl; // HELLO

	// 字符串拼接
	string s6 = s4 + ", " + " world";
	cout << s6 << endl; // HELLO world

    // 字符串比较
    string s7 = "hello";
    string s8 = "world";
	if(s7 == s8) {
		cout << "s7 == s8" << endl;
    } else {
		cout << "s7!= s8" << endl;
    }



	// 清空字符串
    // s4.clear();
    // cout << "删除了字符串" << s4 << endl;


	cin.get();
}