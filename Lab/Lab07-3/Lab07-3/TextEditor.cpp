#include "TextEditor.h"


TextEditor::TextEditor()  // Class constructor
{
	//Implement
	LineType* header;
	header = new LineType;
	char topLine[] = "---Top of file---";
	header->info = topLine;

	LineType* trailer;
	trailer = new LineType;
	char bottomLine[] = "---Bottom of file---";
	trailer->info = bottomLine;

	header->back = NULL;
	header->next = trailer;
	trailer->back = header;
	trailer->next = NULL;
	currentLine->next = header;
	listData = header;
}

TextEditor::~TextEditor()
// Class destructor
{
	MakeEmpty();
}

bool TextEditor::IsFull() const
// Returns true if there is no room for another ItemType 
//  on the free store; false otherwise.
{
	LineType* location;
	try
	{
		location = new LineType;
		delete location;
		return false;
	}
	catch (std::bad_alloc exception)
	{
		return true;
	}
}

int TextEditor::LengthIs() const
// Post: Number of items in the list is returned.
{
	return length;
}

void TextEditor::MakeEmpty()
// Post: List is empty; all items have been deallocated.
{
	LineType* tempPtr;

	while (listData != NULL)
	{
		tempPtr = listData;
		listData = listData->next;
		delete tempPtr;
	}
	length = 0;
}


void TextEditor::InsertItem(ItemType* newline)
// item is in the list; length has been incremented.
{
	// implement

	LineType* newNode;
	newNode = new LineType;
	newNode->info = newline;

	if (currentLine->next == NULL) {
		newNode->back = currentLine->back;
		newNode->next = currentLine;
		(currentLine->back)->next = newNode;
		currentLine->back = newNode;
	}
	else {
		newNode->back = currentLine;
		newNode->next = currentLine->next;
		currentLine->next->back = newNode;
		currentLine->next = newNode;
		currentLine = currentLine->next;
	}

	length++;

}



void TextEditor::ResetList()
// Post: Current position has been initialized.
{
	currentLine = listData;
}


void TextEditor::GetNextItem(ItemType* item)
// Post:  Current position has been updated; item is current item.
{
	if (currentLine == NULL)
		currentLine = listData;
	else
		currentLine = currentLine->next;

	for (int i = 0; currentLine->info[i] != '\0'; i++)
		item[i] = currentLine->info[i];
}

void TextEditor::GoToTop() {
	// implement
	while (!(currentLine->back == NULL)) {
		if (length == 0) {
			currentLine = currentLine->next;
			break;
		}
		currentLine = currentLine->back;
	}
}

void TextEditor::GoToBottom() {
	// implement
	while (!(currentLine->next == NULL)) {
		if (length == 0) {
			break;
		}
		currentLine = currentLine->next;
	}
}