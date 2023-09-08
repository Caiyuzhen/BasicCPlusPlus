#include <iostream>
#include <string>
using namespace std;


/* 
	指针函数:
		指向函数的指针
 */


// 🌟🌟 【函数指针 => 一个指针指向函数】的定义, *fp 表示指向函数的指针 ————————————————————————————————————————————————————————————————————————————————————————————————
// Case 1:
string stuInfo(string name = "untitles", int age = 18) { 
	string info = "姓名: " + name + "年龄: " + to_string(age);
	return info;
};


// Case 2:
const string& longerStr(const string& x, const string& y) {
	return x.size() < y.size() ? x : y;
}




/*
 🌟🌟 【函数指针 => 一个指针指向函数】作为【另一个函数的形参】 ————————————————————————————————————————————————————————————————————————————————————————————————
	根据场景, 有时候是选择更长的字符串, 有时候则是选择更短的字符串 => 则可以把选择的逻辑（return x.size() < y.size() ? x : y;）抽象成一个函数, 作为另一个函数的形参
*/



// 【复杂的 函数作为指针参数 的定义方式】 ------------------------
void selectStr(const string&x, const string&y, const string& (*fp)(const string&, const string&)) {
	//...
}



// 【简化后的 函数作为指针参数 的定义方式】 => FunA 为【指针函数】 ------------------------
// typeof 为自定义类型别名 => 用来简短长度！

typedef const string& (*FuncA)(const string&, const string&);  //🔥 (*FuncA) 为指针的类型别名！！用来替代上面👆那一长串函数指针的定义
void selectStr2(const string&x, const string&y, FuncA) { // => FunA 为上面定义的 *FuncA 【⚡️指针函数的类型别名！！】
	//...
};





typedef const string& Func(const string&, const string&); // 普通函数的别名



// 【C++ 11 提供的更简化的定义方式】
// typeof decltype(longerStr) *Func2;




// 🌟🌟 【函数指针 => 一个指针指向函数】作为【函数的返回值】, 默认函数不能作为函数的返回值, 但函数指针可以 ————————————————————————————————————————————————————————————————————————————————————————————————
FuncA* funX(int); // 【写法一】funX 函数返回一个指向函数的指针, 该函数的参数为 int, 返回值为 FuncA 类型的指针

// Func fun2(int);//不能直接只用函数作为返回值❌

FuncA fun3(int); // 因为 FuncA 是上面已经定义好的 typedef *FuncA , 函数指针的类型别名, 所以这里不用加星号也没问题

auto funY(int) -> FuncA*; // 【写法二】 auto XX() -> XXX* 使用【尾置返回类型】的定义方式, 更简洁！







int main() {
	string(*fp) (int) = nullptr;
	string(*fp2) (string, int); //Case1 的函数指针, 【🌟1.定义指针: *fp2 为指针】, 指向某个函数, 【🔥定义可以只写类型, 不写参数！】
	const string& (*fp3) (const string&, const string&); //Case2 的函数指针, *fp3 为指针, 【🔥定义可以只写类型, 不写参数！】

	fp2 = &stuInfo; // & 为取地址符, 让 【🌟2.指针取地址: fp2 指针】获得【函数的地址】
	fp2 = stuInfo; // 可以不加取地址符 &, 类比数组可以直接赋值给指针, 因为数组默认指向第一个元素！
	fp3 = &longerStr; // & 为【取地址】符, 让 【fp3 指针】获得【函数的地址】

	(*fp2)("小明", 22);//【🌟3.指针解引用: 直接使用指针指向的函数】
	fp2("小明", 22);// 函数指针 => 可以省略解引用运算符！！
	cout << fp2("小明", 22) << endl;




	void selectStr(
		const string&, 
		const string&, 
		const string &(const string&, const string&) //第三个参数是函数类型
	); 
}