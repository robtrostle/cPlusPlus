#pragma once
#pragma once
//This is the header file pistol.h
//This is the interface for the class pistol. 
//This class inherits from handgun. 
#pragma once
#include <string>
#include "handgun.h"
using namespace std;

class Pistol : public Handgun
{
public:
	Pistol();//default constructor
	Pistol(const string& theManufacturer, const string& theCaliber,
		const string& theGrip, const string& theSight, const bool& theLaser,
		const bool& theSemiAuto);
	void setSemiAuto(const bool& newSemiAuto);
	bool getSemiAuto() const;
	virtual void printGun() const override;//custom print method for pistol
private:
	bool semiAuto;
};