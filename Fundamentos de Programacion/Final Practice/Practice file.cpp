#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main () {
	
	string sNametxt;
	
	cout << "Inserta el nombre del archivo .txt ";
	cin >> sNametxt;
	
	ifstream myfile (sNametxt.c_str());
	
	int i=0;
	
	if (myfile.is_open()) {
		while (getline (myfile, sNametxt)) {
			i++;
		}
	}
	
	cout << i;
	myfile.close();
	
	return 0;
}
