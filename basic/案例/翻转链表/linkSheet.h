
#pragma once // .h 头文件只被编译器解析一次
// .h 为头文件🔥🔥🔥


/*
	链表: 每个节点都包涵指向下个对象的指针
		翻转的本质上就是把 next 指针指回到前面
*/ 


// 🔥链表结构体
struct ListNode {
	int value; // 数据
	ListNode* next;// 指向下一个节点的指针
};

