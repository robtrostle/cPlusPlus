//Write a program that demonstrates the use of input/output file streams. 
//Created by Robert Trostle - CIT245
//Created on 6/24/20
#pragma warning(disable 4996)
#include<string>
#include<cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

#define FILENAME "advice.txt"//MACRO this allows us to change the name of the file in one place for convenience. 

int main()
{   //Declare streams and a string to hold our advice
	ifstream inStream;
	ofstream outStream;
	fstream inOutStream;
	string advice;

	//open input file string, passing in the macro
	inStream.open(FILENAME);

	if (!inStream.fail()) {  // file exists…
		cout << "Found Advice File." << endl;
		cout << "Old Advice: " << endl;
		while (!inStream.eof()) {
			getline(inStream, advice);//read in old advice 
			if (advice.length() == 0)//This will avoid having a blank line in the output 
			{
				continue;
			}
			cout << advice << endl;
		}
		//close input file stream
		inStream.close();
	}  else {    // This file does NOT exist.
		cout << "Could not open Advice File." << endl;
		cout << "Assumption: first run - creating a new file..." << endl;
	}
	inOutStream.open(FILENAME, ios::in | ios::out | ios::app);  // create new file

	cout << "Enter your phrase for the next user: "<<endl;

	getline(cin, advice);//read in new advice

	inOutStream << advice<<endl;

	//close all streams 
	inOutStream.close();
	inStream.close();
	outStream.close();

	system("pause");
	return 0;
}
