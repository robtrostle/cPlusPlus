/*

Kenneth L Moore
CIT 245
File to show use of comma operator in for loop

*/
#include <iostream>
using namespace std;

void main(){
   int i, j;
   for(i=0, j=10; i<j; ++i, j--)
	  
	   cout << i << " " << j << endl;
   
}