/*

Kenneth L Moore
CIT 245
File to show use of a structure and passing a structure to 
a function.

*/

#include <iostream>
// from the STL a string class similar to java String class
#include <string>

using namespace std;

class employees{
public:
	string name;
	int age;
	double salary;
	void print(string msg);
};


void main(){
	employees fred, ted;
	
	fred.age = 44;
	fred.name = "fred";
	fred.salary = 24000.00;
	fred.print("Fred Out");
	ted.age = 35;
	ted.name = "betty";
	ted.salary = 50000.86;
	//ted.salary++; don't do this on doubles, even though it works here.
	ted.print("Ted Out");
}
void employees::print(string msg){
	cout << msg << endl;
	cout << age << endl;
	cout << name << endl;
	cout << salary << endl;
}
