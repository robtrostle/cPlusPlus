/*

Kenneth L Moore
CIT 245
File to show use of a structure and passing a structure to
a function and how to prototype a function.

*/

#include <iostream>
#include <string>

using namespace std;

struct employees {
    string name;
    int age;
    double salary;
};

// employees is not to change hence the const
void print(string, employees const&);

void main() {
    employees fred, ted;

    fred.age = 44;
    fred.name = "fred";
    fred.salary = 24000.00;
    print("Fred Out", fred);
    ted.age = 35;
    ted.name = "betty";
    ted.salary = 50000.00;
    print("Ted Out", ted);
}

void print(string msg, employees const& a) {
    cout << msg << endl;
    cout << a.age << endl;
    cout << a.name << endl;
    cout << a.salary << endl;

}// outarr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


