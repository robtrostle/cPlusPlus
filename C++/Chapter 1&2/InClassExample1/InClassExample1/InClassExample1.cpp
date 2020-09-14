#include <iostream>
using namespace std;




void main(void) {
	int arr[10];
	int* pa = arr;
	cout << arr << " " << &arr[0] << " " << pa << endl;

	for (int i = 0; i < 10; i++)
		arr[i] = (i + 1) * (i + 1);

	cout << endl;

	// standard array access
	for (int k = 0; k < 10; k++)
		cout << arr[k] << endl;

	cout << endl;

	// access the elements via pointer arithmetic
	for (int j = 0; j < 10; j++)
		cout << *(pa + j) << endl;

	cout << endl;

	// access the elements of the array by pointer incrementation
	for (pa = arr; pa < arr + 10; pa++)
		cout << *pa << endl;

	// at this point pa points to one past the array
	cout << endl;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
