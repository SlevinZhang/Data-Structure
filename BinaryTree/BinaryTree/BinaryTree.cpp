#include"BinaryTree.h"
#include<iostream>
void BinaryTree::PreOrderTraverse(node *node) {
	if (node != nullptr) {
		std::cout << node->data << std::endl;
		if (node->lchild) PreOrderTraverse(node->lchild);
		if (node->rchild) PreOrderTraverse(node->rchild);
	}	
}
void BinaryTree::inOrderTraverse(node *node) {
	if (node != nullptr) {
		if (node->lchild) inOrderTraverse(node->lchild);
		std::cout << node->data << std::endl;
		if (node->rchild) inOrderTraverse(node->rchild);
	}
}
void BinaryTree::PostOrderTraverse(node *node) {
	if (node != nullptr) {
		if (node->lchild) PostOrderTraverse(node->lchild);
		if (node->rchild) PostOrderTraverse(node->rchild);
		std::cout << node->data << std::endl;
	}
}
BinaryTree::BinaryTree(){
	root = nullptr;
	Nodenum = 0;
}
void BinaryTree::CreateNewTree(node *node) {
	int Ndata;
	std::cout << "Type in the value of node" << std::endl;
	std::cin >> Ndata;
	node->data = Ndata;



}
