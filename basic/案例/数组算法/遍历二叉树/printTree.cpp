#include <iostream>
#include "treeNode.h" //⚡️引入自己定义的文件

/*
	先序遍历: 
		1. 访问根节点
		2. 遍历左子树
		3. 遍历右子树
	中序遍历
		1. 遍历左子树
		2. 访问根节点
		3. 遍历右子树
	后序遍历
		1. 遍历左子树
		2. 遍历右子树
		3. 访问根节点
*/ 

// 🚀 先序遍历 => 利用递归
void printTreePreOrder(TreeNode* root) { //类似链表结构, 需要传入【指向根节点的指针】
	// 递归出口（基准情况） => 先序, 没有子节点就进行返回 => 指向空指针
	if(root == nullptr) { //是空树则进行返回
		return;
	};

	// 1.先打印【根节点】
	// cout << (*root).name << "\t"; //🔥 【写法一】先使用【解引用】来捕获根节点, 然后使用【成员运算符】拿到 name
	cout << root -> name << "\t"; //🔥【写法二】, 拿到指针的成员对象

	// 2.递归打印【左右子树】
	printTreePreOrder(root->left);
	printTreePreOrder(root->right);
}




// 🚀 中序遍历 => 利用递归
void printTreeMidOrder(TreeNode* root) { 
	// 递归出口（基准情况） => 先序, 没有子节点就进行返回 => 指向空指针
	if(root == nullptr) { //是空树则进行返回
		return;
	};

	// 1.先打印【左子树】
	printTreeMidOrder(root->left);

	// 2.再打印【根节点】
	cout << root -> name << "\t";

	// 2.最后打印【右子树】
	printTreeMidOrder(root->right);
}




// 🚀 后序遍历 => 利用递归
void printTreeLastOrder(TreeNode* root) { 
	// 递归出口（基准情况） => 先序, 没有子节点就进行返回 => 指向空指针
	if(root == nullptr) { //是空树则进行返回
		return;
	};

	// 1.先打印【左子树】
	printTreeLastOrder(root->left);


	// 2.再打印【右子树】
	printTreeLastOrder(root->right);

	// 3.最后打印【根节点】
	cout << root -> name << "\t";
}