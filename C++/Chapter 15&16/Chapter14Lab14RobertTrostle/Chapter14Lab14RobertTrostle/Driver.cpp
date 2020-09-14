//Modify Chapter 14 program to include a virtual print function 
//Created by Robert Trostle - CIT245
//Created on 7/8/20
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

	Gun* gunCabinet[] = { &revolver, &pistol }; //Gun Cabinet array that contains revolver and pistol

	int numGuns = sizeof(gunCabinet) / sizeof(Gun*);//set numGuns equal to the size of the array. This allows us to add more guns without changing the size. 

	cout << "My Gun Cabinet Contains: " << endl;
	for (int i = 0; i < numGuns; i++)
	{
		gunCabinet[i]->printGun();//print out the contents of the gunCabinet. 
	}

	system("pause");
	return 0;
}
