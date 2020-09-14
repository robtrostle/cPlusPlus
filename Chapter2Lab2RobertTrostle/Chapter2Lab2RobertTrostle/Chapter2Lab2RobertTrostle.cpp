//Write a program that computes buoyant force given the radius and weight of a sphere. 
//Created by: Robert Trostle
//Created on: 5/20/20

#pragma warning(disable 4996)
#include<string>
#include<cstdlib>
#include <iostream>//preprocessor statement 
#include <math.h>
using namespace std;

int main()
{
    //Declare Variables: Need radius and weight from the user
        double radius, weight;
        const double waterWeight = 62.4;//to hold the const water weight
        const double PI = 3.141592;//To hold PI
        int answer; // Variable answer, 0 or 1
   
        cout<<"This program computes Buoyant Force in water given sphere radius.\n";
        cout<<"Based on the weight of the sphere, it determines whether the sphere floats or sinks.\n\n";

    do {
            cout << "Enter the radius of the sphere.\n";
            cin >> radius;
            cout << "You entered " << radius << "\n\n";

            cout << "Enter the weight of the sphere.\n";
            cin >> weight;
            cout << "You entered " << weight << endl;

            double volume = (4.0 / 3.0) * (PI) * (pow(radius, 3));//calculates volume
            double bouyantForce = (volume) * (waterWeight);//Calculates the bouyant force

            cout << "Boyant Force = " << bouyantForce<<endl;
            if (bouyantForce >= weight) {
                cout << "Egads, it floats!\n";
        }
             else {
                 cout << "It sinks . . .\n";
        }
            cout << "Recalculate? (1 = yes, 0 = exit)\n";
            cin >> answer;
            cout << endl;
    } while (answer == 1);

        cout << "Press any key to continue . . .";
        cout << endl;//End program
        system("pause");
        return 0;

}


