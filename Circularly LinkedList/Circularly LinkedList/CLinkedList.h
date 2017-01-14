#ifndef CLinkedList_H
#define CLinkedList_H

struct node
{
	int data;
	node *next_p;
};

class CLinkedList {
private:
	node *head;
	node *rear;
	int length;
public:
	CLinkedList() {
		head = new node;
		head->next_p = head;
	}
};
#endif
