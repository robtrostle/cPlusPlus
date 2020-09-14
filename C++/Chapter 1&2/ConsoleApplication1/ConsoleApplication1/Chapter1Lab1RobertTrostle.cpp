//Write a program that utilizes the Babylonian square root algorithm
//Created by Robert Trostle 
//Created on 5/18/2020
#pragma warning(disable 4996)
#include<string>
#include<cstdlib>
#include <iostream>
using namespace std;

int main()
{
		int n;//Declare n to hold user's number 
		double guess, r;
		double precision = .001;

		cout << "Enter a number and I will apply the Babylonian square root algorithm\n";
		cout << "until I am within .001 of the correct answer.\n";
		cin >> n;
		cout << "You entered " << n << "\n";

		guess = n / 2;
		r = n / guess;
		guess = (guess + r) / 2;
        cout << "guessing " << guess << "\n";//Print out first guess

	while ((guess * guess) - n >= precision)//Loop through until the guess * guess is within .001 precision. 
	{
			r = n / guess;
			guess = (guess + r) / 2;

			cout << "guessing " << guess << "\n";
	} 

		cout << "The Babylonian algorithm gives " << guess << "\n";//show the answer

		cout << "Checking: " << guess << " * " << guess << " =  " << guess * guess;//double check the answer to show it's correct. 
		cout << endl;

	system("pause");
	return 0;

}



