#pragma once
#include<string>
using namespace std;


// 🚀定义二叉树结构体
struct TreeNode {
	string name;
	TreeNode * left; // 定义指向子节点的两个指针
	TreeNode * right; // 定义指向子节点的两个指针
};



// 声明 printTree.cpp 内的函数
void printTreePreOrder(TreeNode* root);
void printTreeMidOrder(TreeNode* root);
void printTreeLastOrder(TreeNode* root);
