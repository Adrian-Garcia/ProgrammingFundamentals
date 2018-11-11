#include <iostream>

using namespace std;

void GetValues (int iArr[], int &iN) {
	cout << "Inserta numero de Valores ";
	cin >> iN;
	
	for (int i=0; i<iN; i++) {
		cout << "Inserta el valor " << i+1; " ";
		cin >> iArr[i];
	}
}

void Prom (int iArr[], int &iN) {
	
	double dTotal = 0;
	int iCounter;
	
	for (int i=0; i<iN; i++) {
		if (iArr[i] < 0) {
			dTotal += iArr[i]; 
			iCounter++;
		}
	}
	
	cout << dTotal/iCounter;
}


int main () {
	
	int iArr[10];
	int iN;
	
	GetValues (iArr, iN);
	Prom (iArr, iN);
	
	return 0;
}
