#pragma once
#include<string>
using namespace std;


// 🚀定义二叉树结构体
struct TreeNode {
	string name;
	TreeNode * left; // 定义指向子节点的两个指针
	TreeNode * right; // 定义指向子节点的两个指针
};


/*
	先序遍历: 
		1. 访问根节点
		2. 先序遍历左子树
		3. 先序遍历右子树
	中序遍历
		1. 中序遍历左子树
		2. 访问根节点
		3. 中序遍历右子树
	后序遍历
		1. 后序遍历左子树
		2. 后序遍历右子树
		3. 访问根节点
*/ 