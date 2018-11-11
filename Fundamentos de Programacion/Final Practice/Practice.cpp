#include <iostream> 
#include <string>

using namespace std;

void Palindrome () {
	
	string sWord;
	
	cout << "Inserta la palabra que quieres reviar ";
	cin >> sWord;
	
	int iSize = sWord.length();
	int j = sWord.length() - 1;
	bool Validation = true;
	
	for (int i=0; i<iSize/2; i++) {
		if (sWord.at(i) != sWord.at(j)) {
			Validation = false;
		}
		j--;
	}
	
	if (Validation == true) {
		cout << "Yes";
	}
	
	else {
		cout << "No";
	}
	
}

int main () {
	
	Palindrome ();	

	return 0;
}

