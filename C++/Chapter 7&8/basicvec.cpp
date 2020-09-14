/*
  basic use of the STL vector class

  Ken Moore 2-8-03
  CIT 245 Boyce

*/
#include <iostream>
#include <vector>
using namespace std;

void main(){

	// fixed size use [] operator do not exceed limits
	// you may resize to increase size.
	vector<int> a(10);// size 10
	int i = 0;
	for(i=0; i <10; i++)
		a[i]=i*i;
	for(i = 0; i < a.size(); i++)
		cout << a[i] << endl;

	// growable vector syntax
	vector<int> b;// note: no size specified
	
	for(i=0; i <15; i++)
		b.push_back(i*i);// causes automatic growth if needed

	for(i = 0; i < b.size(); i++)
		cout << b[i] << endl;

}