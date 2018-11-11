#include <iostream>

using namespace std;

int GetNumber () {
	
	int iN;
	
	cout << "Inserta el numero que quieres verificar ";
	cin >> iN;
	
	return iN;
}

void Divisores (int iN) {
	
	int iArr[10];
	
	int iCounter=0;
	
	for (int i=1; i<=iN; i++) {
		if (iN%i == 0) {
			iArr[iCounter] = i;
			iCounter++;
		}
	}
	
	for (int j=0; j<iN; j++) {
		if (iArr[j] != 0) {
			cout << iArr[j] << " ";
		}
	}
	
}

int main () {
	
	int iN = GetNumber();
	
	Divisores (iN);
	
	return 0;
}
