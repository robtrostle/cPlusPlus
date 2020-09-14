//Part 1: Demonstrate pointers. Part 2: Demonstrate copy constructors and destructors. 
//Created by Robert Trostle - CIT245
//Created on 6/17/20
#pragma warning(disable 4996)
#include<string>
#include<cstdlib>
#include <iostream>
using namespace std;

class WrapArrayDeep {
public:
	WrapArrayDeep(); //Default constructor initializes to 5 
	WrapArrayDeep(const WrapArrayDeep& wad);	//copy constructor
	~WrapArrayDeep();//Destructor
	char& operator[](int index);//read and change access to elements
	void displayDeep();
private:
	char* pch;
};
class WrapArrayShallow {
public:
	WrapArrayShallow(); //Default constructor initializes to 5 
	WrapArrayShallow(const WrapArrayShallow& was);	//copy constructor
	~WrapArrayShallow();//Destructor
	char& operator[](int index);//read and change access to elements
	void displayShallow();
private:
	char* pca;
};

int main()
{
	int i = 7;//Create an int  i with a value of 7
	int* pi;//Create a pointer to integer pi
	pi = &i;//Point your pointer pi to your int variable i
	
	cout << "This program section uses 3 variables" << endl;
	cout <<"pi = "<<pi<<endl;//Print out your pointer
	cout <<"dereference pi "<<*pi<<endl;//print a dereference of your pointer.
	cout << "address of pi "<<&pi<<endl;//print the address of your pointer 
	cout << "address of i " << &i << endl;//print the address of i
	cout << endl;

	int** ppi = &pi;//Create a pointer to your integer pointer ppi. Point it to your pointer to int pi

	cout << "ppi = " << ppi << endl;//. Print out ppi
	cout << "dereference ppi " << *ppi << endl;//print a dereference to ppi 
	cout << "address of ppi " << &ppi << endl;//print the address of ppi
	cout << "double dereference ppi " << **ppi << endl;//print a double dereference to ppi
	cout << "\n\n";

	cout<<"This section instantiates a wrapper class for a dynamic array of 5 elements\n\n";

	WrapArrayDeep wad1, *wad2;
	wad2 = new WrapArrayDeep(wad1);
	cout << "WrapArrayDeep 1" << endl;
	wad1.displayDeep();
	cout << endl;
	cout << "WrapArrayDeep 2 using the copy constructor on 1." << endl;
	wad2->displayDeep();
	cout << endl;
	//change contents of wad
	wad1[0] = '{';
	wad1[1] = '|';
	wad1[2] = '}';
	wad1[3] = '~';
	wad1[4] = '^';

	cout << "after changing the contents of WrapArrayDeep 1, 1 and 2 = " << endl;
	wad1.displayDeep();
	cout << endl;
	wad2->displayDeep();

	cout << "\n\n";

	cout << "Now doing the same thing with WrapArrayShallow\n\n";

	WrapArrayShallow was1, *was2;
	was2 = new WrapArrayShallow(was1);
	cout << "WrapArrayShallow 1" << endl;
	was1.displayShallow();
	cout << endl;
	cout << "WrapArrayShallow 2 using the copy constructor on 1." << endl;
	was2->displayShallow();
	cout << endl;
	//change contents of was
	was1[0] = '{';
	was1[1] = '|';
	was1[2] = '}';
	was1[3] = '~';
	was1[4] = '^';

	cout << "after changing the contents of WrapArrayShallow 1, 1 and 2 = " << endl;
	was1.displayShallow();
	cout << endl;
	was2->displayShallow();
	cout << "\n\n";

	/*delete wad2;
	delete was2;*/

	system("pause");
	return 0;
}
void WrapArrayDeep::displayDeep()//array notation to print array
{
	for (int i = 0; i < 5; i++)
	{
		cout << pch[i] << " ";
	}
}
WrapArrayDeep::WrapArrayDeep()//Default constructor initializes to 5 
{
	pch = new char[5];
	*pch = 97; //Use pointer arithmetic to load your array with ASCII values for letters.
	*(pch + 1) = 98;
	*(pch + 2) = 99;
	*(pch + 3) = 100;
	*(pch + 4) = 101;
}
WrapArrayDeep::WrapArrayDeep(const WrapArrayDeep& wad) //copy constructor
{
	pch = new char[5];
	for (int i = 0; i < 5; i++)
	{
		pch[i] = wad.pch[i];
	}
}
WrapArrayDeep::~WrapArrayDeep()
{   
	cout << "calling destructor for WrapArrayDeep"<<endl;
	delete[] pch;
}
char& WrapArrayDeep::operator[](int index)
{
	return pch[index];
}
void WrapArrayShallow::displayShallow()
{
	for (int i = 0; i < 5; i++)
	{
		cout << *(pca + i) << " ";//pointer arithmatic to disply the array
	}
}
WrapArrayShallow::WrapArrayShallow()
{
	pca = new char[5];
	pca[0] = 'a';
	pca[1] = 'b';
	pca[2] = 'c';
	pca[3] = 'd';
	pca[4] = 'e';
}
WrapArrayShallow::WrapArrayShallow(const WrapArrayShallow& was)//improper copy constructor that causes the copy to point to the array in the source object. 
{
	pca = was.pca;
}
WrapArrayShallow::~WrapArrayShallow()
{
	cout << "calling destructor for WrapArrayShallow"<<endl;
	delete[] pca;
}
char& WrapArrayShallow::operator[](int index)
{
	return pca[index];
}



