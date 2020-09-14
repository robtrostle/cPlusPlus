//Write a Towers of Hanoi game
//Created by Robert Trostle - CIT245
//Created on 6/29/20
#pragma warning(disable 4996)
#include<string>
#include<cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

void toh(int p, char from, char to, char a);
//recursive method to symbolize the game "Towers of Hanoi"
static int moves = 0;
//to keep track of moves

int power(int num, int powerOf);
//returns num to the power of powerOf

int main()
{
	int disks;//to hold the number of disks chosen by user
	int choice = 0;//to hold user's choice of whether or not to continue

	do {
		moves = 0;//reset moves to 0 each time the loop iterates
		cout << "Enter number of disks" << endl;
		cin >> disks;

		cout << "source 1 target 2 temporary 3" << endl;

		toh(disks, '1', '2', '3'); //1, 2, and 3 are the rod names. 

		cout << "2 to the power of " << disks << " is " << power(2, disks) << endl;

		cout << "Number of moves " << moves << endl;
		cout << endl;

		cout << "Continue? (1=yes 0=no)" << endl;
		cin >> choice;
	} while (choice == 1);
	
	system("pause");
	return 0;
}
void toh(int p, char from, char to, char a){
	if (p == 1)  //if the number of disks is 1, there would only be 1 move
{
    cout << "Move disk 1 from rod " << from <<
        " to rod " << to << endl;
	moves++;
    return;
}
toh(p - 1, from, a, to);//else decerement number of disk and recurse
cout << "Move disk " << p << " from rod " << from <<" to rod " << to << endl;
toh(p - 1, a, to, from);
	moves++;
}
int power(int num, int powerOf)
{
	if (powerOf < 0)
	{
		cout << "Illegal argument to power. Must be greater than 0. \n";
		exit(1);
	}
	if (powerOf > 0)
		return (power(num, powerOf - 1) * num);
	else  // num == 0
		return (1);
}
