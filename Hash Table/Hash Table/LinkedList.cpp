#include"stdafx.h"
#include"LinkedList.h"

LinkedList::LinkedList() {
	head = new Item;
	head->next = NULL;
	length = 0;

}

Item * LinkedList::getItem(string litmkey) {
	Item *p = head;
	Item *q = head;
	while (q) {
		p = q;
		if ((p != head) && (p->key == litmkey)) {
			return p;
		}
		q = q->next;
	}
	return NULL;
}
int LinkedList::getLength() {
	return length;
}

void LinkedList::insertItem(Item * newItem) {
	if (!head->next) {
		head->next = newItem;
		length++;
		return;
	}
	Item *p = head;
	Item *q = head;
	//traversal the whole list
	while (p) {
		q = p;
		p = p->next;
	}
	q->next = newItem;
	length++;
}

bool LinkedList::removeItem(string itemKey) {
	if (!head->next)
		return false;
	Item *p = head;
	Item *q = head;
	while (q) {
		if (q->key == itemKey) {
			p->next = q->next;
			delete q;
			length--;
			return true;
		}
		p = q;
		q = p->next;
	}
	return false;
}

void LinkedList::printList() {
	if (length == 0) {
		cout << "\n{}\n";
		return;
	}
	Item *p = head;
	Item *q = head;
	cout << "\n{";
	while (q) {
		p = q;
		if (p != head) {
			cout << p->key;
			if (p->next) cout << ",";
			else cout << "";
		}
		q = p->next;
	}
	cout << "} \n";
}

LinkedList::~LinkedList() {
	Item * p = head;
	Item * q = head;
	while (q) {
		p = q;
		q = p->next;
		//if it has a next item, delete this one
		if (q) delete p;
	}
}