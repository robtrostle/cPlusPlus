//Write a program that demonstrates static variables using a counter. 
//Created by Robert Trostle - CIT245
//Created on 6/9/20
#pragma warning(disable 4996)
#include<string>
#include<cstdlib>
#include <iostream>
using namespace std;

class Counter
{
public:
	Counter();
	//default constructor
	Counter(int x);
	int inc();
	//increments the counter and total
	int dec();
	//decrements the counter and total
	void display();
	//Displays the current state of the counter object
	void setName(string n);
	//sets the name of the object as a string so it can be returned in the display
	string getName();
	//gets the name of the object in the display
private:
	string name;
	int count;
	//keeps count of the current object
	static int totalIncsAndDecs;
	//static variable to keep count of the total incs and decs
};

int Counter::totalIncsAndDecs = 0;

int main()
{
	Counter C1;
	C1.setName("C1");
	C1.display();
	Counter C2(200);
	C2.setName("C2");
	C2.display();
	C1.inc();
	C1.display();
	C2.dec();
	C2.display();
	
	system("pause");
	return 0;
}

Counter::Counter(int x)
{
	count = x;
}
Counter::Counter()
{
	count = 0;
}
int Counter::inc()
{
	for (int i = 0; i < 85; i++) {
          count++;
		  totalIncsAndDecs++;
	}
	return count;
}
int Counter::dec()
{
	for (int i = 0; i > -242; i--) {
		count--;
		totalIncsAndDecs++;
	}
	return count;
}
void Counter::setName(string n)
{
	name = n;
}
string Counter::getName()
{
	return name;
}
void Counter::display()
{
		cout << "Current state of "<<getName()<<endl;
		cout << "Current count: " << count<<endl;
		cout << "total increments and decrements " << totalIncsAndDecs << endl;
}
