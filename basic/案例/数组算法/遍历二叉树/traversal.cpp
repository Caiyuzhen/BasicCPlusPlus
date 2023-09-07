#include <iostream>
#include "treeNode.h" //⚡️引入自己定义的文件

// 实际遍历二叉树
int main() {
	// 🚀🚀定义一棵二叉树（⚡️跟链表结构一样, 先定义每棵树的最后的节点⚡️）
	TreeNode nodeG = {"G", nullptr, nullptr}; //🔥左树一个数据
	TreeNode nodeF = {"F", nullptr, nullptr}; //🔥右树最后一个数据
	TreeNode nodeE = {"E", &nodeG, nullptr}; 
	TreeNode nodeD = {"D", nullptr, nullptr}; 
	TreeNode nodeC = {"C", nullptr, &nodeF};
	TreeNode nodeB = {"B", &nodeD, &nodeE};
	TreeNode nodeA = {"A", &nodeB, &nodeC};

	TreeNode* Tree = &nodeA; //🚀树本身是指向根节点, 也就是 nodeA


	printTreePreOrder(Tree); //🚀先序遍历
	cout << endl; //换行
	printTreeMidOrder(Tree); //🚀中序遍历
	cout << endl; //换行
	printTreeLastOrder(Tree); //🚀后序遍历


	cin.get();
}


/*
	编译：
		g++ traversal.cpp printTree.cpp -o traversal
	运行:
		./traversal
*/
