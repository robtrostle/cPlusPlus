//This is the file pistol.cpp
//This is the implenation for the class pistol
//The interface for the class pistol is in the header file pistol.h
#include <string>
#include<cstdlib>
#include<iostream>
#include"pistol.h"
using namespace std;

Pistol::Pistol() : Handgun(), semiAuto(false)//Default constructor for pistol object. Inherits from gun/handgun. Must add new attribute for semi-Auto. 
{}
Pistol::Pistol(const string& theManufacturer, const string& theCaliber,
	const string& theGrip, const string& theSight, const bool& theLaser,
	const bool& theSemiAuto)
	: Handgun(theManufacturer, theCaliber, theGrip, theSight, theLaser), semiAuto(theSemiAuto)
{}
bool Pistol::getSemiAuto()const
{
	return semiAuto;
}
void Pistol::setSemiAuto(const bool& newSemiAuto)
{
		semiAuto = newSemiAuto;
}
void Pistol::printGun() const 
{
	cout << "Pistol: " << getManufacturer() << ", " << getCaliber() << ", " << (getSemiAuto() ? "Semi-Auto" : "Fully-Auto")<<", "<< 
		getGrip() << ", " << (getLaser() ? "Laser" : "No Laser")<< ", " << getSight() <<  endl;
}