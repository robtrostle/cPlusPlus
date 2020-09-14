#pragma once
//This is the header file revolver.h
//This is the interface for the class revolver. 
//This class inherits from handgun. 
#pragma once
#include <string>
#include "handgun.h"
using namespace std;

class Revolver : public Handgun
{
public:
	Revolver();
	Revolver(const string& theManufacturer, const string& theCaliber,
		const string& theGrip, const string& theSight, const bool& theLaser,
		const bool& theSingleAction, const int& numberOfRounds);
	void setSingleAction(const bool& newSingleAction);
	bool getSingleAction() const;
	void setNumberOfRounds(const int& newNumberOfRounds);
	int getNumberOfRounds() const;
	virtual void printGun() const override;//custom print method for revolver. 
private:
	bool singleAction;
	int numberOfRounds;
};