#include "InsertionSort.h"

void InsertItem(Student values[], int startIndex, int 
endIndex)
// Post: values[0]..values[endIndex] are now sorted.
{
  bool finished = false;
  int current = endIndex;
  bool moreToSearch = (current != startIndex);

  while (moreToSearch && !finished)
  {
    if (strcmp(values[current].getName(), values[current-1].getName()) < 0)
    {
      Swap(values[current], values[current-1]);
      current--;
      moreToSearch = (current != startIndex);
    }
    else
      finished = true;
  }
}

void InsertionSort(Student values[], int numValues)
// Post: The elements in the array values are sorted by key.
{
  for (int count = 0; count < numValues; count++)
    InsertItem(values, 0, count);
}

