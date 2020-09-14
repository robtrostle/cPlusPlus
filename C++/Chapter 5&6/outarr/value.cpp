/*

Kenneth L Moore
CIT 245
File to show how to use reference variables.

*/
using namespace std;

// change prototype to no & and will not swap.
void f(int &, int &);

void main(){

	int x = 1, y = 1;

	// show reference variables.
	int&p=x, &q=y;
	f(p,q);
	cout << x << " " << y << endl;
}

void f(int & a, int & b){
	cout << a << " " << b << endl;
	a = 42;
	b = 77;
	cout << a << " " << b << endl;
}