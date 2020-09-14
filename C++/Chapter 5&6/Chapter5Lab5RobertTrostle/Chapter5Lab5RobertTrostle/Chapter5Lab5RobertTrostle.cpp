//Write a program that generates random numbers between 1 and 10 and fill an array of  size 20 with them.  
//Created by Robert Trostle - CIT245
//Created on 6/4/20
#pragma warning(disable 4996)
#include<string>
#include<cstdlib>
#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

//Function Prototypes
int random();
//Returns a random integer between 1 and 10. 

int main()
{
   int choice = 0;
  
	srand(time(0));//Use Clock to get a seed
	cout << "This program generates random numbers and tabulates the results"<<"\n\n";
	cout << " Original List Sorted:\n";

do{
	int original[20] = { 0 };//Array to hold the list of 20 random numbers in range 1-10
	int sum[11] = { 0 };//array to hold the count of each random number. 
	 
		for (int i = 0; i < 20; i++) {//loop though 20 times assigning a random number x
			int x = random();
			original[i] = x;//assign index of the array to x, which is random integer
			sum[x]++;//count up each index by incrementing them. 
		}
		
		sort(original, original + 20);//sort the array of random integers

		for (int i = 0; i < 20; i++) 
		{
				cout << "a[" << i << "] " << original[i] << endl;//print out the results of the random integer array. 
		}
		cout << endl;

		cout << "N  Count" << endl;//Column header for list of counts

		for (int i = 1; i <= 10; i++) //print out the results of the sum array
		{
			cout << i  << ": " << sum[i] << endl;
		}
		cout << "Try Again? (1 = yes, 0 = exit)\n";
		cin >> choice;
	} while (choice == 1);

	system("pause");
	return 0;

}

int random() {

	int random = 1 + rand() % 10;

	return random;
}




