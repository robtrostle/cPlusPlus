//This is the file revolver.cpp
//This is the implenation for the class revolver
//The interface for the class revolver is in the header file revolver.h
#include <string>
#include<cstdlib>
#include<iostream>
#include"revolver.h"
using namespace std;

Revolver::Revolver(): Handgun(), singleAction(false), numberOfRounds(0)//Default constructor for revolver. Inherits all from gun/handgun. Must add singleAction and numberOfRounds.
{}
Revolver::Revolver(const string& theManufacturer, const string& theCaliber,
	const string& theGrip, const string& theSight, const bool& theLaser,
	const bool& theSingleAction, const int& numberOfRounds)
	: Handgun(theManufacturer, theCaliber, theGrip,theSight,theLaser), singleAction(theSingleAction), numberOfRounds(numberOfRounds)
{}
bool Revolver::getSingleAction()const
{
	return singleAction;
}
void Revolver::setSingleAction(const bool& newSingleAction)
{
	singleAction = newSingleAction;
}
int Revolver::getNumberOfRounds() const
{
	return numberOfRounds;
}
void Revolver::setNumberOfRounds(const int& newNumberOfRounds)
{
	numberOfRounds = newNumberOfRounds;
}
void Revolver::printGun() const
{																																																//ternary operator for boolean method
	cout << "Revolver: "<< getManufacturer() << ", " << getCaliber() << ", " << getNumberOfRounds() <<" shot, "<<(getSingleAction() ? "Single Action" : "Double Action")
		<<", "<< getGrip() << ", " << (getLaser() ? "Laser" : "No Laser") << ", " << getSight() << endl;
}

	