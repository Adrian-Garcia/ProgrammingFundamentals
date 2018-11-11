#include <iostream>
#include <math.h>

using namespace std;

void GetValues (int &iN, int &iX) {
	
	cout << "Inserta un valor para N: ";
	cin >> iN; 
	
	cout << "Inserta un valor para X: ";
	cin >> iX;
	
}

void Value (int &iN, int &iX) {
	
	double dTotal=0;
	
	for (int i=0; i<=iN; i++) {
		dTotal += pow(iX,i);
	}
	
	cout << dTotal;
		
}

int main () {
	
	int iN;
	int iX;
	
	GetValues(iN, iX);
	
	Value(iN, iX);
	
	return 0;
}
