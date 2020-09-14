/*

Kenneth L Moore
CIT 245
File to show danger of array out of bounds

*/
#include <iostream>
using namespace std;

void main(){

	// declare a variable to corrupt
	int x = 42;

	// declare an array with indicies from 0->9
	int arr[10];

	// put things in 0->10
	for(int i=0; i<=10; i++)
		arr[i]=i;

	// show corruption
	cout << " should be 42 " << x << endl;


}