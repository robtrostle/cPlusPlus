/*
  File to show several different compiler error messages and
  to give insight into scoping.

  Ken Moore 2-8-03
  CIT 245 Boyce
*/
#include <iostream>
using namespace std;

class aClass{

	int p;  // private by default

public:

	// same as aClass(){p=3;}
	aClass(void):p(3){
	}

	// same as aClass(){p=x;}
    aClass(int x):p(x){}

	// leaving out void gives looks like ctor error message on 
	// compiler.  Try removing void and look at the error message.
	// note that this is an acessor not a mutator
	void print()const {cout << p << endl;}

	// do nothing destructor
	~aClass(void){

		// show calling of destructor
		cout << "destructor being called" << endl;
	}
};

void main(void){
	int i(0);// same as   int i=0;

	// use default constructor
	aClass a;  // try aClass a(); to see a baffling error message

    // prove default used
	a.print();

	// use overload constructor
	aClass b(1236);

	// prove overload used
	b.print();

	{// limit scope of k and c
		int k = 9;
		{
			// k in scope
			cout << k << endl;
		}
		// c destructor is called at next }
		aClass c(333);

	}
	// will not compile, k out of scope
	//cout << k << endl;
	cout << "c now out of scope" << endl;

	// at this point a,b destructors called.
}