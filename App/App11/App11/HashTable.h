#pragma once
#include "Student.h"

const int MAX_ITEMS  = 20000;

template <class ItemType>
class HashTable {
	public:
		HashTable() {}
		HashTable(ItemType emptyKey);
		int Hash(float key) const;
		void RetrieveItem(ItemType& item, bool& found);
		void InsertItem(ItemType item);

	private:
		ItemType info[MAX_ITEMS];
		ItemType emptyItem;
		int length;
};



int getIntFromFloat(float key)
{
	return int(key);
}

template <class ItemType> 
HashTable <ItemType>::HashTable(ItemType emptyItem) {


	this->emptyItem = emptyItem;
	length = 0;

	for (int i = 0; i < MAX_ITEMS; i++) 
		info[i] = emptyItem;

}



template <class ItemType>
void HashTable<ItemType>::InsertItem(ItemType item) {

	int location;
	location = Hash(item.getKey());
	while(info[location] != emptyItem) {
		location = (location + 1) % MAX_ITEMS;
	}
	info[location] = item;
	length++;
}

template <class ItemType> 
int HashTable<ItemType>::Hash(float key) const {
	return (getIntFromFloat(key) % MAX_ITEMS);
}


template <class ItemType>
void HashTable<ItemType>::RetrieveItem(ItemType &item, bool& found) {
	int location;
	int startLoc;
	bool moreToSearch = true;
	startLoc = Hash(item.getKey());
	location = startLoc;

	do {
		if (info[location] == item || info[location] == emptyItem)
			moreToSearch = false;
		else
			location = location + 1;
	} while (moreToSearch);

	found = (info[location] == item);
	if (found)
		item = info[location];
}