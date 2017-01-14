
#ifndef LinkedList_h
#define LinkedList_h

#include<iostream>	
#include<string>

using namespace std;

struct Item
{
	std::string key;
	Item *next;
};

class LinkedList {
private:
	Item *head;
	int length;
public:
	LinkedList();
	void insertItem(Item *newItem);
	bool removeItem(string itemKey);
	Item * getItem(string litmKey);
	void printList();
	int getLength();
	~LinkedList();

};
#endif