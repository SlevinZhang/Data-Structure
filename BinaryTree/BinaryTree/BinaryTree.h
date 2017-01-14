#ifndef BinaryTree_H
#define BinaryTree_H

struct node {
	node *lchild;
	node *rchild;
	int data;

};

class BinaryTree {
private:
	node *root;
	int Nodenum;
public:
	BinaryTree();
	//~BinaryTree();
	void PreOrderTraverse(node *);
	void inOrderTraverse(node *);
	void PostOrderTraverse(node *);
	bool isEmpty() const { return root == nullptr; }
	void CreateNewTree(node *);
	void insert(int);
	void remove(int);
};
#endif // !BinaryTree_H


