//Write a program that implements a class money. Demonstrate multiple constructors and friend functions. 
//Created by Robert Trostle - CIT245
//Created on 6/9/20
#pragma warning(disable 4996)
#include<string>
#include<cstdlib>
#include <iostream>
#include<cmath>
using namespace std;
//create a money class
class Money
{
public:
	Money();//default constructor
	Money(double amount);
	Money(int dollars, int cents);
	Money(int dollars);
	//friend functions for operators
	friend const Money operator +(const Money& amount1, const Money& amount2);
	friend const Money operator -(const Money& amount1, const Money& amount2);
	friend bool operator ==(const Money& amount1, const Money& amount2);
	friend const Money operator -(const Money& amount);
	//friend functions for I/O
	friend ostream& operator <<(ostream& outputStream, const Money& amount);
	friend istream& operator >>(istream& inputStream, Money& amount);
	//functions for comparing objects
	friend bool operator <(const Money& amount1, const Money& amount2);
	friend bool operator >(const Money& amount1, const Money& amount2);
	//function for determining percentage of money
	Money percentage(const Money& amount, double percent) const;
private:
	int dollars, cents;
	int dollarsPart(double amount)const;
	int centsPart(double amount)const;
	int round(double number)const;
	double tenPercent;
};

int main()
{
	Money yourAmount, myAmount(10, 9);
	cout << "Enter an amount of money:  ";
	cin >> yourAmount;
	cout << "Your amount is " << yourAmount << endl;
	cout << "My amount is " << myAmount << endl;

	if (yourAmount == myAmount)
		cout << "We have the same amounts. \n";
	else
		cout << "One of us is richer.\n";
	if (yourAmount > myAmount)
		cout << "You have more money than me.\n";
	else if (yourAmount < myAmount)
		cout << "I have more money than you.\n";

	Money tenPercent = yourAmount.percentage(yourAmount,10);
	cout << "10% of your money is: "<<tenPercent<<endl;

	Money ourAmount = yourAmount + myAmount;
	cout << yourAmount << " + " << myAmount << " equals " << ourAmount << endl;

	Money diffAmount = yourAmount - myAmount;
	cout << yourAmount << " - " << myAmount << " equals " << diffAmount << endl;

	system("pause");
	return 0;
}
const Money operator +(const Money& amount1, const Money& amount2)
{
		int allCents1 = amount1.cents + amount1.dollars * 100;
		int allCents2 = amount2.cents + amount2.dollars * 100;
		int sumAllCents = allCents1 + allCents2;
		int absAllCents = abs(sumAllCents);
		int finalDollars = absAllCents / 100;
		int finalCents = absAllCents % 100;
		if (sumAllCents < 0)
		{
				finalDollars = -finalDollars;
				finalCents = -finalCents;
		}
		return Money(finalDollars, finalCents);
}
const Money operator -(const Money& amount1, const Money& amount2)
	{
		int allCents1 = amount1.cents + amount1.dollars * 100;
		int allCents2 = amount2.cents + amount2.dollars * 100;
		int diffAllCents = allCents1 - allCents2;
		int absAllCents = abs(diffAllCents);
		int finalDollars = absAllCents / 100;
		int finalCents = absAllCents % 100;

		if (diffAllCents < 0)
		{
			finalDollars = -finalDollars;
			finalCents = -finalCents;
		}
		return Money(finalDollars, finalCents);
}
bool operator ==(const Money& amount1, const Money& amount2)
{
	return ((amount1.dollars == amount2.dollars)
		&& (amount1.cents == amount2.cents));
}
const Money operator -(const Money& amount)
{
	return Money(-amount.dollars, -amount.cents);
}
Money::Money() : dollars(0), cents(0) {}
Money::Money(double amount)
	: dollars(dollarsPart(amount)), cents(centsPart(amount)) {}
Money::Money(int theDollars)
	: dollars(theDollars), cents(0) {}
Money::Money(int theDollars, int theCents)
{
	if ((theDollars < 0 && theCents > 0) || (theDollars > 0 && theCents < 0))
	{
		cout << "Inconsistent money data.\n";
		exit(1);
	}
	dollars = theDollars;
	cents = theCents;
}
int Money::dollarsPart(double amount) const
{
	return static_cast<int>(amount);
}
int Money::centsPart(double amount) const
{
	double doubleCents = amount * 100;
	int intCents = (round(fabs(doubleCents))) % 100;
	if (amount < 0)
		intCents = -intCents;
	return intCents;
}
int Money::round(double number) const
{
	return static_cast<int>(floor(number + 0.5));
}
ostream& operator <<(ostream& outputStream, const Money& amount)
{
	int absDollars = abs(amount.dollars);
	int absCents = abs(amount.cents);
	if (amount.dollars < 0 || amount.cents < 0)
		outputStream << "$-";
	else
		outputStream << '$';
	outputStream << absDollars;
	if (absCents >= 10)
		outputStream << '.' << absCents;
	else
		outputStream << '.' << '0' << absCents;
	return outputStream;
}
istream& operator >>(istream& inputStream, Money& amount)
{
	char dollarSign;
	inputStream >> dollarSign;
		if (dollarSign != '$')
		{
			cout << "No dollar sign in Money input.\n";
			exit(1);
		}
	double amountAsDouble;
	inputStream >> amountAsDouble;
	amount.dollars = amount.dollarsPart(amountAsDouble);
	amount.cents = amount.centsPart(amountAsDouble);
	return inputStream;
}
bool operator <(const Money& amount1, const Money& amount2)
{
	return ((amount1.dollars < amount2.dollars) ||
		((amount1.dollars == amount2.dollars) && (amount1.cents < amount2.cents)));
}
bool operator >(const Money& amount1, const Money& amount2)
{
	return ((amount1.dollars > amount2.dollars) ||
		((amount1.dollars == amount2.dollars) && (amount1.cents > amount2.cents)));
}
Money Money:: percentage(const Money& amount, double percent)const
{
		int amountToCents = amount.cents + amount.dollars * 100;
		double ScaledMoney = amountToCents * percent;
		int scaledDollars = abs((round(fabs(ScaledMoney / 100))) / 100);
		int scaledCents = abs((round(fabs(ScaledMoney / 100))) % 100);
		if (ScaledMoney < 0) {
			scaledDollars = -scaledDollars;
			scaledCents = -scaledCents;
		}
		return Money(scaledDollars, scaledCents);
	}




