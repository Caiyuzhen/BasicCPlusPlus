#include<iostream>
#include<string>
using namespace std;



/*
	指针
		What?
			指针本身也是一个数据对象

			用来存放其他某个数据对象的内存地址 - 间接访问
*/
int main() {
	// 定义指针 🧭
	int* p1; //用【指针】定义某个数据类型, 可以不做初始化
	long* p2; //用【指针】定义某个数据类型, 可以不做初始化
	float* p3; // 指向的数据是 float 的数据类型
	void* p4; //【🔥特殊🔥】表示可以指向任意类型的数据对象

	cout << p1 << " " << p2 << " " << p3 << endl;
	cout << sizeof(p1) << " " << sizeof(p2) << " " << sizeof(p3) << endl; // 8 -> 因为指向的对象是 64 位系统, 用 8 个字节来存放数据的。  指针的大小跟系统的内存地址空间有关系, 跟指向的数据对象没关系, 因为这个系统是 64 位系统, 所以是 8 字节


	int a = 10;
	int b = 20;
	long c = 35;
	char d = 'h';

	// 地址操作符 & 🌍, 可以捕捉另外一个对象的地址, 相当于给指针赋值
	p1 = &a; //【指针初始化】 =>  把 a 的地址拿出来赋值给 【p1 指针】, 🔥注意类型得对应！！！ int 指针对应 int 变量的地址
	p2 = &c; //【指针初始化】 =>  把 c 的地址拿出来赋值给 【p2 指针】, 🔥注意类型得对应！！！ int 指针对应 int 变量的地址
	p4 = &d; // void 类型的指针可以随意指向不同的数据类型
	

	cout << "变量 a 的地址为: " << &a << endl;
	cout << "变量 b 的地址为: " << &b << endl;
	cout << p2 << endl; // 0x16b6c6828 => 0x16b6c6828


	// 访问指针所保存的数据(解引用, *XX ) 🌟
	*p1 = 12; // 相当于改了 a, 操作 p1 就是操作了 a 🚀
	cout << "a 的新值: " << a << endl;

	p1 = &b; // 也可以重新捕捉 p1 的地址, 从指向 a 换成指向 b
	*p1 = 998;
	cout << "此时 p1 就是 b 的值" << b << endl; // 998
	cout << "此时 a 还是: " << a << endl; // 12

	//*vp = 999 //❌ void 类型的指针无法解引用来访问数据



	// ________________________________________________________________________________________________________________________________________________________________________________________________________________________
	// 【野指针 => 没初始化】如果定义指针后, 指针没有指向任何对象, 然后直接解引用来访问指针, 那么就会很危险, 因为可能会随机指向一个内存地址 （可能会指向到系统的内存地址）

	// 【空指针 => 定义时, 指向一个没有任何含义的地址】
	int* np = NULL;  // 预处理变量
	int* np2 = nullptr; // 空指针字面值
	int* np3 = 0; // 0 也可以表示空指针



	// 指向指针的指针 （二级指针、三级指针...）
	int i = 1124;
	int* pi = &i;
	int** ppi = &pi;
	int*** pppi = &ppi;
	int**** ppppi = &pppi;

	cout << "pi: " << *pi << endl; //访问时也需要做对应层数的解引用！ *
	cout << "ppi: " << **ppi << endl; //访问时也需要做对应层数的解引用！ **
	cout << "pppi: " << ***pppi << endl; //访问时也需要做对应层数的解引用！ ***
	cout << "ppppi: " << ****ppppi << endl; //访问时也需要做对应层数的解引用！ ****

	// ________________________________________________________________________________________________________________________________________________________________________________________________________________________
	// 【1】指向常量的指针（🔥指针本身就是变量, 然后指向常量, 不可以修改值） const XXX* XX = &XX
	const int c1 = 10, c2 = 25;
	const int* pc = &c1; // 指针本身是变量, 指向常量, 得加 const 来定义, 但 pc 本身是变量

	cout << "pc 的值: " << *pc << endl; // 解引用拿出值: 10

	pc = &c2; // pc 本身是变量, 可以更改赋值, 但是不能通过 pc 来更改 c1 的值, 比如 *pc = 100 ❌



	// 【2】指针常量（🔥指针本身就是常量, 然后指向变量, 可以修改值） XXX* const XX = &X
	int* const cp = &i; //需要赋值给变量i ！不能赋值给常量 c1 !
	*cp = 1994; // 可以通过 cp 来修改 i 的值

	cout << "修改了 *cp 的值: " << *cp << endl;



	// 【3】指针常量并且指向常量（🔥指针本身就是常量, 然后指向常量, 不可以修改值）
	const int* const pp = &c1;
	// *pp = 100; ❌
	cout << *pp << endl; // 10





	// ________________________________________________________________________________________________________________________________________________________________________________________________________________________
	// 数组赋值给指针
	int arr[] = {1,2,3,4,5};
	int* pid = arr; // 指针可以指向数组的地址, 等于 指向了 arr[0], 🔥 因为 arr[] 的地址 会取 arr[0] 的地址
	*pid = 99;

	cout << "等价于访问数组: " << *pid << endl;  // 把数组的第一位改成了 99
	for(int num: arr) {
		cout << num << "\t"; 
	}

	cout << endl;


	// 指针运算
	cout << "pid + 1 = " << *(pid + 1) << endl; //pid + 1 会跳到下一个数据对象的地址, 就会变成 arr[1]
	cout << "arr + 1 = " << *(arr + 1) << endl; //🚀 因为数组的底层也是指向 int 的指针, 所以 arr + 1 也是可以的


	// ________________________________________________________________________________________________________________________________________________________________________________________________________________________
	// 指针数组 （🔥一个数组, 所有元素都是相同类型的指针）
	// 数组指针 （🔥一个指针, 指向一个数组）

	int* paa[5]; // 指针数组, 有 5 个元素, 每个都是指向 int 的指针, 占 X 8 = 40 字节
	int(* ap)[5]; // 数组指针, 指向一个数组的指针, 占 8 个字节

	paa[0] = &i; // 指针数组, 赋值
	paa[1] = arr + 1; // 指针数组, 赋值
	cout << "paa[0]的值" << *paa[0]<< endl;
	cout <<  "paa[1]的值" << *paa[1]<< endl;


	// 数组指针, 赋值
	// ap = arr// ❌ 错误, 因为 ap 指向数组, arr 是指向数组第一个元素 int 的指针
	ap = &arr; //取地址符号 & 可以取出数组的地址, 然后赋值给 ap, 这样就没问题
	cout << "*ap :" << *ap << endl; //得到的是整个数组的地址
	cout << "**ap :" << **ap << endl; //得到的是整个数组第 1 位的值
	cout << "**ap 加一 :" << *(*ap + 1) << endl; //得到的是整个数组第 2 位的值

	cin.get();
}