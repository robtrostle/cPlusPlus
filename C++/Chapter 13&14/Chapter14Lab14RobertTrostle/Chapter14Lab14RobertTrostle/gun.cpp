//This is the file gun.cpp
//This is the implenation for the class gun
//The interface for the class gun is in the header file gun.h
#include <string>
#include<cstdlib>
#include<iostream>
#include"gun.h"
using namespace std;

Gun::Gun() : manufacturer("No Manufacturer yet"),//Default Constructor for our base gun class
caliber("No caliber yet")
{}

Gun::Gun(const string& theManufacturer, const string& theCaliber)
	: manufacturer(theCaliber), caliber(theCaliber)
{}

string Gun::getManufacturer()const
{
	return manufacturer;
}

string Gun::getCaliber()const
{
	return caliber;
}

void Gun::setManufacturer(const string& newManufacturer)
{
	manufacturer = newManufacturer;
}

void Gun::setCaliber(const string& newCaliber)
{
	caliber = newCaliber;
}

void Gun::printGun()const
{}
