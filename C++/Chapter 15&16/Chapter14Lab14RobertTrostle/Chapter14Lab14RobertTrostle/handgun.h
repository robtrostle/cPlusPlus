//This is the header file handgun.h
//This is the interface for the class handgun. 
//This class inherits from gun. 
#pragma once
#include <string>
#include "gun.h"
using namespace std;

class Handgun : public Gun
{
public:
	Handgun();
	Handgun(const string& theManufacturer, const string& theCaliber,
		const string& theGrip, const string& theSight, const bool& theLaser);
	void setGrip(const string& newGrip);
	void setSight(const string& newSight);
	string getGrip() const;
	string getSight() const;
	void setLaser(const bool& newLaser);
	bool getLaser() const;
	virtual void printGun() const override;
private:
	string grip;
	string sight;
	bool laser;
};