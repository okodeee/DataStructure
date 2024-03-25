#include <iostream>
#include "NStack.h"

using namespace std;

NStack::NStack(void)
{
	data = NULL;
}

NStack::NStack(NStack& another)
{
	ItemType* ptr1;
	ItemType* ptr2;
	if (another.data == NULL)
		data = NULL;
	else
	{
		data = new ItemType;
		data->item = another.data->item;
		ptr1 = another.data->next;
		ptr2 = data;
		while (ptr1 != NULL)
		{
			ptr2->next = new ItemType;
			ptr2 = ptr2->next;
			ptr2->item = ptr1->item;
			ptr1 = ptr1->next;
		}
		ptr2->next = NULL;
	}
}

NStack::~NStack()
{
	ItemType *t, *s;
	t = data;
	while(t != NULL) {
		s = t;
		t = t->next;
		delete s;
	}
}

void	NStack::print(string title)
{
	ItemType *t;

	cout << title << ": ";
	t = data;
	while(t != NULL) {
		cout << t->item << ' ';
		t = t->next;
	}
	cout << endl;
}

bool	NStack::nmPush(int f, int b, string it)
{
	if (data == NULL) {
		ItemType* newnode;
		newnode = new ItemType;
		newnode->item = it;
		newnode->next = NULL;
		newnode->back = NULL;
		data = newnode;
	}
	else {

		ItemType *location;

		location = data;
		for (int i = 0; i < f; i++) {
			if (location->next == NULL)
				return false;
			location = location->next;

		}
		for (int j = 0; j < b; j++) {
			if (location->back == NULL)
				return false;
			location = location->back;
		}
		ItemType* newnode;
		newnode = new ItemType;
		newnode->item = it;

		if (location->back == NULL) {
			newnode->back = NULL;
			newnode->next = location;
			location->back = newnode;
			data = newnode;
		}
		else {
			newnode->next = location;
			newnode->back = location->back;
			(location->back)->next = newnode;
			location->back = newnode;
		}

	}
	return true;
}

bool	NStack::nmPop(int f, int b, string& it)
{
	ItemType *location;

	location = data;
	for (int i = 0; i < f; i++) {
		if (location->next == NULL)
			return false;
		location = location->next;
	}
	for (int j = 0; j < b; j++) {
		if (location->back == NULL)
			return false;
		location = location->back;
	}

	it = location->item;

	if (location->back == NULL) {
		data = location->next;
		data->back = NULL;
	}
	else if (location->next == NULL) {
		(location->back)->next = NULL;
	}
	else {
		(location->next)->back = location->back;
		(location->back)->next = location->next;
	}
	delete location;
}