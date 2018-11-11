#include <iostream>

using namespace std;

int Size () {
	
	int iSize;
	
	cout << "De que tamano quieres la piramide invertida ";
	cin >> iSize;
	
	return iSize;
}

void Pyramid (int Size) {
	
	for (int i=0; i<Size; i++) {
		for (int j=Size-i; j>0; j--) {
			cout << "*";
		}
		cout << endl;
	}
}

int main () {
	
	int iSize;
	
	iSize = Size ();
	
	Pyramid (iSize);
	
	return 0;
}
