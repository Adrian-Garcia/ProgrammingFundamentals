#include <iostream>

using namespace std;

int main () {
	
	int Cases;
	cin >> Cases;
	for (int i=1; i<=Cases; i++) {
		
		int ParteEntera;
		double ParteDecimal, dNum;
		
		cin >> dNum;
		
		dNum = dNum/6;
		
		ParteEntera = dNum;
		
		ParteDecimal = ParteEntera - ParteDecimal;
		
		cout << ParteDecimal << endl;
		cout << ParteEntera << endl;
		
		/*
		if (ParteDecimal == 0) {
			cout << "YES" << endl;
		}
		
		else {
			cout << "NO" << endl;
		}
		*/
	}
	
	return 0;
}
