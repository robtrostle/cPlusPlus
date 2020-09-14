//Write a program that simulate the roll of dice and tabulates the results
//Created by Robert Trostle - CIT245
//Created on 5/28/2020
#pragma warning(disable 4996)
#include<string>
#include<cstdlib>
#include <iostream>
#include <ctime>
#include<iomanip>
#include<cmath>
using namespace std;

//Function Prototypes
int random();
//Returns a random number
void rollDice(int d[], int n);
//Simulates the roll of two dice. Adds them up and keeps count of each roll. Takes in an intialized array and the 
//number of rolls from the user 
double calcOdds(int sum);
//Calculates the odds of getting each roll



int main()
{
	srand(time(0));//Use Clock to get a seed
	int numRolls; //to hold the number of rolls chosen by the user
	
	int count[13];  //  array to keep track of the sum of each roll 
	int choice = 0; // to hold user's choice whether or not to continue 

	cout<<"This program rolls two dice and tabulates the results.\n"<<endl;
	
	   do{
		 // intialize count array to all 0s
		for (int i = 1; i < 13; i++)
		   {
			   count[i] = 0;
		   }
		cout << "Please enter the number of rolls you want: ";
		cin >> numRolls;
		rollDice(count, numRolls);  // roll how many times user specifies

		//Display column headers
		cout << "Sum"<<setw(11) << "#Rolled"<<setw(11)<< " Odds"<<setw(13) << "%Error" << endl;
        
		for (int i = 2; i < 13; i++) {
			//set the odds to the calculation of odds times the number of rolls. 
			int odds = calcOdds(i) * numRolls;
			double error = (fabs(count[i] - odds) / odds) * 100;

			cout << setw(3)<< i <<setw(11)<<count[i] << setw(11)<< odds << setw(13);
			//Format the Error column to 4 point precision
			cout.setf(ios::fixed);
			cout.setf(ios::showpoint);
			cout.precision(4);

			cout << error << endl;
			
		}
		cout << "Try again? (1 = Yes, 0 = Exit)\n";//Give user choice to continue. 
		cin >> choice;
	} while (choice == 1);

	system("pause");
	return 0;

}
int random() {

	int random = 1 + rand() % 6;
	
	return random;
}

void rollDice(int d[], int n)
{
	int die1 = 0;
	int die2 = 0;
	
	for (int i = 0; i < n; i++)
	{
		die1 = random();
		die2 = random();
		d[die1 + die2]++;
	}
	
}

double calcOdds(int sum)
{
	if (sum < 2 || sum > 12)
		return 0;
	if (sum <= 7)
		return double(sum - 1) / 36;
	else 
		return double(12 - (sum - 1)) / 36;
}


