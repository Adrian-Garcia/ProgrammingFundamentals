#include <iostream>

using namespace std;

int MaxRows = 10;
int MaxCols = 10;

void GetValues(int iMat[][10], int &iRows, int &iCols, int &FoundNumber) {
	
	cout << "Inserta el numero de Filas ";
	cin >> iRows;
	
	cout << "Inserta el numero de Columnas ";
	cin >> iCols;
	
	cout << "Inserta el numero que quieres buscar ";
	cin >> FoundNumber;
	
	for (int i=0; i<iRows; i++) {
		for (int j=0; j<iCols; j++) {
			cout << "Inserta el valor " << i << "," << j << " ";
			cin >> iMat[i][j];
		}
	}	
}

void NumberFound (int iMat[][10], int &iRows, int &iCols, int &FoundNumber) {
	
	for (int a=0; a<iRows; a++) {
		for (int b=0; b<iCols; b++) {
			cout << iMat[a][b] << " ";
		}
		cout << endl;
	}
	
	int iCounter=0;
	
	for (int i=0; i<iRows; i++) {
		for (int j=0; j<iCols; j++) {
			if (iMat[i][j] == FoundNumber){
				iCounter++;
			}
		}
	}
	
	cout << iCounter << endl;
}

int main () {
	
	int iMat[10][10];
	int iRows, iCols;
	int FoundNumber;
	
	GetValues (iMat, iRows, iCols, FoundNumber);
	NumberFound (iMat, iRows, iCols, FoundNumber);
	
	return 0;
}
