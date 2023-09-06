#include<iostream>
#include<string>
#include "linkSheet.h" //引入自定义的头文件 需要用引号 "" ！！

using namespace std;


int main() {
	// 定义链表 1 -> 2 -> 3 -> 4 -> 5 -> NULL  🔥 {数据, next指针} 🔥
	ListNode node5 = {5, nullptr}; //最后一个节点
	ListNode node4 = {4, &node5}; //指向 node5
	ListNode node3 = {3, &node4}; //指向 node4
	ListNode node2 = {2, &node3}; //指向 node4
	ListNode node1 = {1, &node2}; //指向 node4

	// 定义一个指针指向头节点
	ListNode* list = &node1; // 一开始指向 head, ListNode 表示类型


	// 打印链表, 因为 for 循环要知道长度, 比较困难, 所以用 while 循环
	ListNode* np = list; // ListNode 表示类型
	while(np) {//当 np 不是 NULL , 就在每次遍历时, 把指针指向 next
		cout << (*np).value << " -> " ; // 结构体可以用 .value 来访问
		np = (*np).next; 	// 把 np 指向下一个节点, .next 是因为结构体的数据结构是这么定义的
	}

	cout << "NULL" << endl;



	// ⚡️⚡️ 翻转链表 (用指针来对调顺序) __________________________________________________________________________________________________________________________________________________________________
	ListNode* curr = list; // 一个指针指向当前遍历的节点
	ListNode* prev = nullptr; // 另一个指针指向之前的节点
	while(curr) { //当当前指针指向 Null, 则遍历完成
		ListNode* temp = (*curr).next; // 临时保存指向下个节点的指针
		(*curr).next = prev; // 等于前一个链表
		prev = curr;
		curr = temp;
	}

	ListNode* newList = prev; //翻转之后的【头节点】

	// 打印翻转后的链表
	ListNode* np2 = newList; // ListNode 表示类型
	while(np2) {//当 np 不是 NULL , 就在每次遍历时, 把指针指向 next
		// cout << (*np2).value << " -> " ; // 结构体可以用 .value 来访问 // (*np2).value 访问结构体, 等价于 curr -> next
		cout << np2 -> value << " -> " ; // 结构体可以用 .value 来访问 // (*np2).value 访问结构体, 等价于 curr -> next
		np2 =  np2 -> next; 	// 把 np 指向下一个节点, .next 是因为结构体的数据结构是这么定义的
	}

	cout << "NULL" << endl;

	
	cin.get();
}