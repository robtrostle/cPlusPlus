//This is the header file gun.h
//This is the interface for the class gun. 
//This is primarily intended to be used as a base class to derive
//classes for different kinds of guns. 
#pragma once
#include <string>
using namespace std;

class Gun
{
public:
	Gun();
	Gun(const string& theManufacturer, const string& theCaliber);
	string getManufacturer() const;
	string getCaliber() const;
	void setManufacturer(const string& newManufacturer);
	void setCaliber(const string& newCaliber);
	virtual void printGun()const = 0; //pure virtual function
private:
	string manufacturer;
	string caliber;
};
