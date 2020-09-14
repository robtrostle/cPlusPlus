/*

File to show use of a static (shared) variable.
Note that x and y are unique per instance but 
that counter is shared.

  Ken Moore 2-8-03
  CIT 245 Boyce
*/
#include <iostream>
using namespace std;

class Point{
	static int counter;
	
public:
	int x,y;
    Point(){counter++;}
	int getCount(void)const{return counter;}
	void setXY(int a, int b){x = a; y = b;}
	void printXY()const{cout << x << " " << y << endl;}
};
int Point::counter = 0;

void main(){
	Point a, b, c;
	a.setXY(1,1);
	b.setXY(2,2);
	c.setXY(3,3);
	a.printXY();
	b.printXY();
	c.printXY();
	cout << a.getCount() << endl;
	cout << b.getCount() << endl;
	cout << c.getCount() << endl;
}