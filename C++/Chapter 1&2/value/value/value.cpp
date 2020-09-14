#include <iostream>
using namespace std;

void f(int&, int&);

void main() {
	int x = 1, y = 1;
	int& p = x, & q = y;
	f(p, q);
	cout << x << " " << y << endl;
}

void f(int& a, int& b) {
	cout << a << " " << b << endl;
	a = 42;
	b = 77;
	cout << a << " " << b << endl;
}
