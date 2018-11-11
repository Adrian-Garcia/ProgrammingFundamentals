#include <iostream> 
#include <limits.h>

using namespace std;

void GetValues (int iArr[], int &iPosition) {	
	
	iPosition = -1;
	
	do {
		iPosition++;
		
		cout << "Inserta el valor " << iPosition << " ";
		cin >> iArr[iPosition];
	} while (iArr[iPosition] >= 0);
} 

void Display (int iArr[], int &iPosition) {
	
	for (int i=0; i<iPosition; i++) {
		cout << iArr[i] << endl;
	}
}

int main () {
	int iArr[INT_MAX];
	int iPosition;
	
	GetValues (iArr, iPosition);
	Display (iArr, iPosition);
	
	return 0;
}
