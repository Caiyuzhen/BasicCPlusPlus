#include<iostream>
using namespace std;


/*
	函数的返回
		1.无返回值
		2.有返回值
*/


// 无返回值 
// => 比如元素互换, 传入 a 跟 b, 让 a 跟 b 互换位置, 注意 C++的传入的参数是拷贝初始化！！要传入引用！
void swap(int & a, int & b) { //👈传入引用！！让 a 跟 b 作为 x 跟 y 的别名！！
	//...
	int temp = a;
	a = b;
	b = temp;
}


// 有返回值 => 需要有 return, 不能是 void
// => 比如返回较长的字符串 
// ⚡️注意, 如果直接返回函数内部的局部变量的引用, 那么可能造成不安全的事
const string & whichIsLonger(const string & a, const string & b) { //🔥因为字符串长度不固定, 并且不需要被修改, ⚡️ 如果是拷贝初始化的话会非常耗费内存, 所以定义成常量引用 ⚡️ 【🔥并且整个函数也是作为一个引用的对象进行返回！！这样就不用额外开辟一个内存空间来保存函数的返回值!!!🔥】
	return a.size() > b.size() ? a : b; // 返回长的那个字符串, size() 来判断字符串的长度
}



// 🚀 返回数组 🔥🔥🔥
// 【定义方法一】 因为数组底层是指向第一个元素的指针, 所以可以定义函数的返回值为指针类型 => 🔥 是【数组指针】而非【指针数组】
int arr[5] = {1,2,3,4,5};
int * parr[5]; //指针数组, 本质是数组, 里边的元素是指针
int(* parrr)[5] = &arr; //数组指针, 本质是指针, 里边的元素是数组, 用 &arr 的地址进行赋值

int(* fun(int x))[5]; // 👈👈 声明 fun 函数, 返回值是指向 int 类型, 长度为 5 的数组 => 🔥 (* fun(int x)) 表示函数的返回结果为指针！！ 🔥



// 【定义方法二】 返回数组的【简化定义方式】
typedef int arrTT[5]; // 👈👈 第一步: 自定义的类型别名, arrTT 表示长度为 5 的 int 数组
arrTT * funA(int x); // 👈👈 第二步: 使用自定义的类型别名修饰 funA 这个函数



// 【定义方法三】 尾置返回类型, C++ 11 的新标准, auto 为自动推断返回类型
// auto funC(int x) -> int(*)[5];




int main() {
	// 无返回值 Case
	int x = 100;
	int y = 98;
	swap(x, y); //🔥注意, 上面的定义是引用, 所以会实际改变到 x 跟 y 的值！！而不是拷贝！
	cout << "x: " << x << "\t";
	cout << "y: " << y << "\t";
	cout << endl;



	// 有返回值 Case
	string xx = "Jimmy";
	string yy = "Kim";
	cout << whichIsLonger(xx, yy) << endl; // 可以把 whichIsLonger 当作 string 来用, 因为它的返回值是 string

	cin.get();
}