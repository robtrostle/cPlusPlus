//Write a program that utilizes an inheritence heirarchy for multiple gun types
//Created by Robert Trostle - CIT245
//Created on 6/29/20
#pragma warning(disable 4996)
#include<string>
#include<cstdlib>
#include <iostream>
#include "revolver.h"
#include "pistol.h"
using namespace std;

int main()
{
	
	Revolver revolver;//Instantiate a Revolver Object
	revolver.setManufacturer("Smith & Wesson");//Set all revolver attributes
	revolver.setCaliber("0.357");
	revolver.setGrip("Hoague Grips");
	revolver.setSight("Laser");
	revolver.setNumberOfRounds(6);
	revolver.setSingleAction(false);
	revolver.setSight("Trijicon Sight");
	revolver.setLaser(true);
	
	Pistol pistol;//Instansiate a Pistol Object 
	pistol.setManufacturer("Glock");//Set all pistol attributes
	pistol.setCaliber("9mm");
	pistol.setSemiAuto(true);
	pistol.setGrip("Manufacturer Grip");
	pistol.setLaser(false);
	pistol.setSight("3 dot sight");

	Gun* gunCabinet[] = { &revolver, &pistol };

	int numGuns = sizeof(gunCabinet) / sizeof(Gun*);
	
	for (int i = 0; i < numGuns; i++)
	{
		gunCabinet[i]->printGun();
	}

	system("pause");
	return 0;
}
