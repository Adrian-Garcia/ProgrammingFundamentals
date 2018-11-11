#include <iostream>

using namespace std;

void GetValues(int &iPrecio) {
	cout << "Inserta un precio: ";
	cin >> iPrecio;
}

void DisplayResult (int &iPrecio){
	
	if (iPrecio <= 0){
		cout << "El impuesto es de 0%" << endl;
		cout << "Total " << iPrecio; 
	}
	
	else if (iPrecio > 0 && iPrecio <= 10000) {
		cout << "El impuesto es de 5%" << endl;
		cout << "Total " << iPrecio + iPrecio*0.5;
	}
	
	else if (iPrecio > 10000 && iPrecio <= 50000) {
		cout << "El impuesto es de 10%" << endl;
		cout << "Total " << iPrecio + iPrecio*0.1;
	}
	
	else if (iPrecio > 50000 && iPrecio <= 100000) {
		cout << "El impuesto es de 15%" << endl;
		cout << "Total " << iPrecio + iPrecio*0.15;
	}
	
	else {
		cout << "El impuesto es de 20%" << endl;
		cout << "Total " << iPrecio + iPrecio*0.2;
	}
}


int main () {
	
	int iPrecio;
	
	GetValues (iPrecio);
	DisplayResult(iPrecio);
	
	return 0;
}
