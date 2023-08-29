#include<iostream>
#include<string>
using namespace std;


/*
	类似面向对象的类, 描述一个【复合数据类型】
*/ 


// 定义结构体
struct CatInfo {
	string name;
	int age;
	double score;
};



// 定义结构体并直接创建数据对象
struct DogInfo {
	string name;
	int age;
	double score;
}dogA, dogB = {"Wang", 4, 97}; //👈相当于直接【⚡️创建】了 dogA, dogB, 然后【⚡️初始化了 dogB】



// 🔥数据结构体对象完整信息的方法
void printInfo(CatInfo catName) {
	cout << "猫咪名称: " << catName.name << " " << "年龄: " << catName.age << endl;
}




int main() {
	// 创建结构体 ——————————————————————————————————
	// 创建数据对象并进行初始化 
	CatInfo catA = {
		"fantuan",
		3,
		99
	};

	// 也可以省略等号
	// CatInfo catB{"dudu", 4, 98};

	// 拷贝初始化
	CatInfo catC = catA;
	


	// 结构体的访问 ——————————————————————————————————
	catC.name = "KK";





	// 访问结构体的数据(访问实例数据、或者实例函数) ——————————————————————————————————
	cout << "猫咪名称: " << catA.name << " " << "年龄: " << catA.age << endl;
	printInfo(catC); //⚡️封装好的访问结构体数据的方法





	cin.get();
	cin.get();

}


