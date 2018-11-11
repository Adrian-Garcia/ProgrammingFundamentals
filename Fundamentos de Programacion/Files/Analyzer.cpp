/*
Files.cpp
This application counts the lines of a txt document 

Adrian Garcia
Version 1.0
10/11/2017
*/
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/*
main
Ask for the user to insert the name of the file thar 
he/she wants to look for. Then, the program will look
for that .txt file. And then, if it can be opened, it 
will count the number of lines in the .txt

Parameters
sNametxt    Name of the .txt document
iCounter    Counter of the lines

Returns
Nothing
*/
int main() {
    
    //To store the name of the
    string sNametxt;
    
    //To read lines
 	string sLine;
 	
 	//Get lines for the .txt
 	getline(cin, sNametxt);
 
    //Look fore a file called like that
    ifstream myfile (sNametxt.c_str());
    
    //Verify that there is a file
    if (myfile.is_open()) {
        
        //Coutner of the number of lines in the .txt 
        int iCounter=0;
        
        //If there is a line
        while (getline(myfile, sLine)) {
            iCounter++; //Ad 1 to the counter
        }
        
        myfile.close(); //Close txt
        cout << iCounter; //Display value of the counter
        
    }
    
    //End program 
    return 0;   
}