//Write a program that demonstrates the use of header files and interfaces
//Created by Robert Trostle - CIT245
//Created on 6/22/20
#pragma warning(disable 4996)
#include<string>
#include<cstdlib>
#include <iostream>
#include "f.h"//only include the header files
#include "g.h"
using namespace std;

int main()
{
	//Call hello using namespace f. 
	f::hello();
	//Call hello using namespace g. 
	g::hello();
	
	system("pause");
	return 0;
}
