//Template a binary search function
//Created by Robert Trostle - CIT245
//Created on 7/8/20
#pragma warning(disable 4996)
#include<string>
#include<cstdlib>
#include <iostream>
using namespace std;

template<typename T>
void search(const T array[], int first, int last, T key, bool& found, int& location);
//if key is not one of the values then found == false, else location == key and found == true

int main()
{
	int a[] = {0,1,1,2,3,5,6,13,21,32,55};
	int ARRAY_SIZE = sizeof(a) / sizeof(a[0]);
    
	int finalIndex = ARRAY_SIZE - 1;

	int location;
	bool found;

	cout << "Integer test array contains: " << endl;
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << a[i]<<" ";
	}
	cout << endl;

	for (int j = -1; j < 8; j++)
	{
		search(a, 0, finalIndex, j, found, location);
		if (found)
			cout << j << " is at index " << location << endl;
		else
			cout << j << " is not in the array. " << endl;
	}

	cout << "=======================================" << endl;

	string b[] = { "head", "knees", "shoulders", "toes" };
	int ARRAY_SIZE2 = sizeof(b) / sizeof(b[0]);
	int finalIndex2 = ARRAY_SIZE2 - 1;
	
	cout << "String test array contains: " << endl;
	for (int i = 0; i < ARRAY_SIZE2; i++)
	{
		cout << b[i] << " ";
	}
	cout << endl;

	string elbows = "elbows";
	string knees = "knees";
	
		search(b, 0, finalIndex2, knees, found, location);
		
		if (found)
		{
			cout << knees << " is at index " << location << endl;
		}
		else
			cout << knees << " is not in the array. " << endl;

		search(b, 0, finalIndex2, elbows, found, location);
	
		if (found)
		{
			cout << elbows << " is in index location " << location << endl;
		}
		else
			cout << elbows << " is not in the array. " << endl;

	system("pause");
	return 0;
}
template<typename T>
void search(const T array[], int first, int last, T key, bool& found, int& location)
{
	int mid;
	if (first > last)
	{
		found = false;
	}
	else
	{
		mid = (first + last) / 2;
		if (key == array[mid])
		{
		found = true;
		location = mid;
		}
		else if (key < array[mid])
		{
		search(array, first, mid - 1, key, found, location);
		}
		else if (key > array[mid])
		{
			search(array, mid + 1, last, key, found, location);
		}
	}
}
