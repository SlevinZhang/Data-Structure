#include"LinkedList.h"
#include"stdafx.h"

LinkedList::LinkedList() {
	head = new node;
	head->nextP = nullptr;
	length = 0;
	
}
void LinkedList::insert(node * newnode) {
	//insert in the front of list
	if (!head->nextP) {
		head->nextP = newnode;
	}


}
bool LinkedList::isEmpty() {
	if (length == 0) {
		return true;
	}
	else {
		return false;
	}
}
position find(int value);
LinkedList::~LinkedList() {
	node * p = head;
	node * q = head;
	while (p) {
		q = p;
		p = p->nextP;
		if (q) {
			delete q;
		}
	}
}