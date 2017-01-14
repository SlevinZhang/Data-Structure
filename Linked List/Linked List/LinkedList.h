#ifndef LinkedList_H
#define LinkedList_H

#include "node.h"
typedef int position;
//The linked list with head node
class LinkedList {
private:
	node * head;
	int length;
public:
	LinkedList();
	void insert(node * newnode);
	bool isEmpty();
	position find(int value);
	~LinkedList();
};

#endif // !LinkedList_H

