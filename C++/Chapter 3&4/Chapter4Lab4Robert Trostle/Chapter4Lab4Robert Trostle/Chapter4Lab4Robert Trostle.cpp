//Write a program that reduces a fraction to lowest terms
//Created by Robert Trostle - CIT245
//Created on 5/26/2020
#pragma warning(disable 4996)
#include<string>
#include<cstdlib>
#include <iostream>
using namespace std;

//Function prototypes
int gcd(int num, int den);
//finds and returns the greatest common denominator. 
string reduce(int& num, int& den);
//provides the lowest terms via reference and returns a string of the fraction. 

int main()
{
		int num, den;//to hold user's choice of numerator and denominator. 
		int choice(0); //to hold user's choice to continue or not
	
	do {
			cout << "Enter the numerator\n";
			cin >> num;
			cout << "Enter the denominator\n";
			cin >> den;

			int greatest = gcd(num, den);//Assign greatest to function call of gcd

			cout << "greatest common denominator is " << greatest << endl; //print out the greatest common denominator. 

			string low = reduce(num, den);

			cout << "your fraction reduced is " << low << endl;
			cout << endl;

			cout << "Try again? (1 = yes, 0 = exit)\n";
			cin >> choice;
			cout << endl;
	} while (choice == 1);

			system("pause");
			return 0;

}

int gcd(int num, int den) {

		int temp;//Temporary variable so that den's value is not lost. 

	while (den != 0) {
			temp = den;
			den = num % den;
			num = temp;
	}
	return num;
}
string reduce(int& num, int& den) {

		int lowestNum = (num / gcd(num, den));//get lowest numerator
		int lowestDen = (den / gcd(num, den));//get lowest denomenator

		string fraction = to_string(lowestNum) + "/" + to_string(lowestDen);//Concatenate the two into a fraction.
		
	return fraction;//return the fraction as a string
} 
