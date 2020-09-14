#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;



int main(int argc, int** argv) {
	int r[14];
	int k = 0;
	srand(time(0));
	for (; k < 14; k++)
		r[k] = 0;
	for (k = 0; k < 360000; k++) {
		r[(rand() % 6 + 1) + (rand() % 6 + 1)]++;
	}
	for (k = 2; k <= 12; k++) {
		cout << k << " = " << r[k] << endl;
	}

	return 0;

}
