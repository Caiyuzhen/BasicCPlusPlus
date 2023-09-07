#include <iostream>
using namespace std;

/*	
	內联函数, 可以提高函数的执行效率, 减少内存开销
*/


// 在函数前增加 inline , 在编译时, 会将函数内部的【具体代码】直接插入到调用函数的地方, 而不是重新调用函数
inline string copyString(string str, int n) {
	//...
}
