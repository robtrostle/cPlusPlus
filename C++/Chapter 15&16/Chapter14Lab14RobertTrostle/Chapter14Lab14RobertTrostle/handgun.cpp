//This is the file handgun.cpp
//This is the implenation for the class handgun
//The interface for the class handgun is in the header file handgun.h
#include <string>
#include<cstdlib>
#include<iostream>
#include"handgun.h"
using namespace std;

Handgun::Handgun() : Gun(), grip("No Grip Yet"), sight("No Sight Yet"), laser(false)//Default constructor for our hangun object. Inherits from gun. Must add new attributes of sight and grip
{}
Handgun::Handgun(const string& theManufacturer, const string& theCaliber,
	const string& theGrip, const string& theSight, const bool& theLaser)
: Gun(theManufacturer, theCaliber), grip(theGrip), sight(theSight), laser(theLaser)
{}
string Handgun::getGrip() const
{
	return grip;
}
string Handgun::getSight() const
{
	return sight;
}
void Handgun::setGrip(const string& newGrip)
{
	grip = newGrip;
}
void Handgun::setSight(const string& newSight)
{
	sight = newSight;
}
bool Handgun::getLaser()const
{
	return laser;
}
void Handgun::setLaser(const bool& newLaser)
{
	laser = newLaser;
}
void Handgun::printGun() const 
{																																					//ternary operator for boolean method
	cout << getManufacturer()<<", "<< getCaliber()<<", "<< getGrip()<<", "<<getSight()<< ", "<<(getLaser() ? "Laser" : "No Laser")<<endl ;
}

