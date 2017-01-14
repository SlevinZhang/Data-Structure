#ifndef HashTable_h
#define HashTable_h

#include"LinkedList.h"

class HashTable
{
private:
	LinkedList *LArray;
	int length;
	//hash function,return the array location in the table
	int hash(string itemKey);
public:
	HashTable(int tableLength = 13);
	~HashTable();
	//add an Item to the hash table
	void insertItem(Item * newItem);
	//remove the item from the table
	bool removeItem(string itemKey);
	Item *getItemBykey(string itemKey);
	void printTable();
	void printHistogram();
	int getLength();
	//return the number of Items in the table
	int getNumberOfItems();

};
#endif
