#include <iostream>

using namespace std;

void GetValues (int iArr[], int &iN, int &iFoundN) {
	cout << "Insert the number of values in the array: ";
	cin >> iN;
	
	cout << "Insert the number that you want to find: ";
	cin >> iFoundN;
	
	for (int i=0; i<iN; i++) {
		cout << "Insert value " << i+1 << ": ";
		cin >> iArr[i];
	}	
}

void FoundWord (int iArr[], int &iN, int &iFoundN) {
	
	int iCounter=0;
	
	for (int i=0; i<iN; i++) {
		if (iArr[i] == iFoundN) {
			iCounter++;
		}
	}
	
	cout << iCounter;
}

int main () {
	
	int iArr[100];
	int iN, iFoundN;
	
	GetValues (iArr, iN, iFoundN);
	FoundWord (iArr, iN, iFoundN);
		
	return 0;
}
