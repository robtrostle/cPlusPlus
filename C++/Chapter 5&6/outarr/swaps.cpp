/*

Kenneth L Moore
CIT 245
File to show how to use .h and .cpp files to make 
your own library.

*/
#include <iostream>
using namespace std;

// if we have our own .h file use "" not <>
// note: to include kswap.cpp in the project go to:
// project/add to project/file and click on kswap.cpp
#include "kswap.h"


void main(){
   int x=1, y = 45534;
   kswap(x,y);

   // see if swapped.
   cout << x << " " << y << endl;
}


