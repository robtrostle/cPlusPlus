//Write a program that demonstrates the use of header files and interfaces
//Created by Robert Trostle - CIT245
//Created on 6/22/20
#pragma warning(disable 4996)
#include<string>
#include<cstdlib>
#include <iostream>
#include "f.h"
#include "f.cpp"
#include "g.h"
#include "g.cpp"

using namespace std;

int main()
{
	{
		using namespace f;
		hello();
	}
	//g::hello();



	system("pause");
	return 0;

}
