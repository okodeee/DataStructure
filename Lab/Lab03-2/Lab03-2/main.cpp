#include <iostream>
using namespace std;

int BinarySearch(int array[], int sizeOfArray, int value);
int main()
{
	int list[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int length = sizeof(list) / sizeof(list[0]);
	int result = BinarySearch(list, length, 11);
	cout << result << endl; // -1 리턴
	result = BinarySearch(list, 10, 7);
	cout << result << endl; // 6 리턴
	return 0;
}int BinarySearch(int array[], int sizeOfArray, int value)
{
	int midPoint;
	int first = 0;
	int last = sizeOfArray - 1;
	bool moreToSearch = (first <= last);
	bool found = false;
	while (moreToSearch && !found)
	{
		midPoint = (first + last) / 2;
		int compared = value - midPoint;
		if (compared < 0)
		{
			last = midPoint - 1;
			moreToSearch = (first <= last);
		}
		else if (compared > 0)
		{
			first = midPoint + 1;
			moreToSearch = (first <= last);
		}
		else
		{
			found = true;
			return midPoint;
		}
	}
	return -1;
}