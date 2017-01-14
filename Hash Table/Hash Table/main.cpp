// Hash Table.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"HashTable.h"

int main()
{
	Item * A = new Item{ "Apple",NULL };
	HashTable firstTable;
	firstTable.insertItem(A);
	firstTable.printTable();
    return 0;
}

