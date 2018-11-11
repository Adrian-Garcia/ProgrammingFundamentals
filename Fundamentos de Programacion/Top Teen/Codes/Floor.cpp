#include <bits/stdc++.h>

using namespace std;

int main () {
	int c;
	cin >> c;
	
	int Piso, PastFloor = 1, Final = 0;
	for (int i=0; i<c; i++) {
		
		cin >> Piso;
		Final = Final + abs (Piso - PastFloor);
		PastFloor = Piso;
	}
	
	int FinalFinal;
	FinalFinal = Final + abs (1 - PastFloor); 
	cout << FinalFinal << endl;
	
	return 0;
}
