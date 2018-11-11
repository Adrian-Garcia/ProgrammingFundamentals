#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main () {
	
	string sNametxt;
	
	cout << "Inserta el nombre del archivo .txt ";
	cin >> sNametxt;
	
	ifstream myfile (sNametxt.c_str());
	
	if (myfile.is_open()) {
		
		int iCounter=0;
		
		while (getline(myfile,sNametxt)) {
			iCounter++;
		}
		
		cout << iCounter;
		
		myfile.close();
		
	}
	
	
	return 0;
}
