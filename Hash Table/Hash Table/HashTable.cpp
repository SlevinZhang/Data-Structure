#include"stdafx.h"
#include"HashTable.h"

#include<iostream>
HashTable::HashTable(int tableLength){
	if (tableLength <= 0) {
		tableLength = 13;	
	}
	length = tableLength;
	LArray = new LinkedList[length];
}

int HashTable::hash(string itemKey) {
	int value = 0;
	for (int i = 0; i < itemKey.length(); i++) {
		value += itemKey[i];
	}
	return (value *itemKey.length()) % length;
}

void HashTable::insertItem(Item * newItem) {
	int index = hash(newItem->key);
	(LArray + index)->insertItem(newItem);
}

bool HashTable::removeItem(string itemKey) {
	int index = hash(itemKey);
	return (LArray + index)->removeItem(itemKey);
}

Item * HashTable::getItemBykey(string itemKey) {
	int index = hash(itemKey);
	return (LArray + index)->getItem(itemKey);
}

void HashTable::printTable() {
	std::cout << "\n \n Hash Table: \n";
	for (int i = 0; i < length; i++) {
		std::cout << "Bucket : " << i + 1 << ": ";
		(LArray + i)->printList();
	}
}

void HashTable::printHistogram() {
	std::cout << "\n \n Hash Table Contains ";
	std::cout << getNumberOfItems() << "Items Total \n";
	for (int i = 0; i < length; i++) {
		std::cout << i + 1 << ":\t";
		for (int j = 0; j < (LArray + i)->getLength(); j++) {
			cout << " X";
		}
		cout << "\n";
	}
}
int HashTable::getLength() {
	return length;
}

int HashTable::getNumberOfItems() {
	int itemCount = 0;
	for (int i = 0; i < length; i++) {
		itemCount += (LArray + i)->getLength();
	}
	return itemCount;
}

HashTable::~HashTable() {
	delete[] LArray;
}