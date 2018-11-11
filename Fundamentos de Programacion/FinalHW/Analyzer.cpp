/*
Analyzer.cpp
This application analyze a .txt document. By receving the name of the .txt document and then, analyze data 
acording on the option that the user give. The options are

1. Number of lines
2. Number of spaces
3. Numbre of vowels
4. Number of Consonants
5. Number of characters in the smallest word
6. Number of characters in the biggest word
7. Number of times a word is repeated
8. Number of pharagraphs

Adrian Garcia
Version 4.0
20/11/2017
*/
#include <iostream>
#include <string>
#include <fstream>
#include <limits.h>
#include <ctype.h>

using namespace std;

/*
Line Number
Option 1. The program will look for a file called like the one that the user gave and then it will verify
that if there is a line. If so, it will count it

Parameters
sLine		To store the characters of a line
iCounter	To store the number of lines 

Returns 
Nothing
*/
void LineNumber (string sNametxt) {
    
    //To read lines
    string sLine;
	
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
        cout << iCounter << endl; //Display number of lines 
    }
}

/*
SpaceNumber
Option 2. The program will look for a file called like the one that the user gave and then it will count the
number of spaces on it

Parameters
sLine		To store the characters of a line
iCounter	To store the number of spaces 
i			Counter for the line loop

Returns
Nothing
*/
void SpaceNumber (string sNametxt) {
    
    //To read lines
    string sLine;

    //Look fore a file called like that
    ifstream myfile (sNametxt.c_str());
    
    //Verify that there is a file
	if (myfile.is_open()) {
		
		//Counter that store number of spaces
		int iCounter=0;
		
		//While there are lines
		while (getline (myfile, sLine)) {
			
			//Look for spaces in every line
			for(int i=0; i<sLine.length(); i++) {
				
				//If there is one add 1 to counter
				if (sLine.at(i) == ' '){
					iCounter++;
				}
			}
		}
        myfile.close(); //Close txt
    	cout << iCounter << endl; //Display number of spaces
	}
}

/*
VowelNumber
Option 3. The program will look for a file called like the one that the user gave and then it will look in 
every character to find vowels. If it is a vowell, it will count it

Parameters
sLine		To store the characters of a line
iCounter	To store the number of vowels
i			Counter for the line loop

Returns
Nothing
*/
void VowelNumber (string sNametxt) {
   
    //To read lines
    string sLine;

    //Look fore a file called like that
    ifstream myfile (sNametxt.c_str());
    
    //Verify that there is a file
	if (myfile.is_open()) {
		
		//Counter that store number of vowels
		int iCounter=0;
		
		//While there are lines
		while (getline (myfile, sLine)) {
			
			//Look for vowels in every line
			for(int i=0; i<sLine.length(); i++) {
				
				//If there is one, add 1 to counter
				if (sLine.at(i) == 'a' || sLine.at(i) == 'e' || sLine.at(i) == 'i' || sLine.at(i) == 'o' || 
				sLine.at(i) == 'u' || sLine.at(i) == 'A' || sLine.at(i) == 'E' || sLine.at(i) == 'I' || 
				sLine.at(i) == 'O' || sLine.at(i) == 'U') {
					iCounter++;
				}
			}
		}
		myfile.close(); //Close txt
    	cout << iCounter << endl; //Display the number of vowels
	}
}

/*
Consonant number
Option 4. The program will look for a file called like the one that the user gave and then it will look in 
every character to find consonants. If it is a consonant, it will count it

Parameters
sLine		To store the characters of a line
iCounter	To store the number of consonants
i			Counter for the line loop

Returns
Nothing
*/
void ConsonantNumber(string sNametxt) {

    //To read lines
    string sLine;

    //Look fore a file called like that
    ifstream myfile (sNametxt.c_str());
    
    //Verify that there is a file
	if (myfile.is_open()) {
		
		//Counter that store number of consonants
		int iCounter=0;
		
		//While there are lines
		while (getline (myfile, sLine)) {
			
			//Look for consonants in every line
			for(int i=0; i<sLine.length(); i++) {
				
				//Validate that characters are letters
				if (sLine.at(i) >= 'a' && sLine.at(i) <= 'z' || sLine.at(i) >= 'A' && sLine.at(i) <= 'Z'){
					
					//Validate that the character is a consonant
					if (sLine.at(i) != 'a' && sLine.at(i) != 'e' && sLine.at(i) != 'i' && sLine.at(i) != 'o' 
					&& sLine.at(i) != 'u'&& sLine.at(i) != 'A' && sLine.at(i) != 'O' && sLine.at(i) != 'I' && 
					sLine.at(i) != 'O' && sLine.at(i) != 'U') {
						iCounter++; //If so, add 1 to iCounter
					}
				}
			}
		}
        myfile.close(); //Close txt
    	cout << iCounter << endl; //Display the number of consonants 
	}
}

/*
CharSmall
Option 5. The program will look for a file called like the one that the user gave and then it will compare every 
word. If it finds a word with less letters than the one that it has, it will make the new word as the samllest 
number

Parameters
sLine		To store the characters of a line
iCounter	To store the number of letters in the current word
iMinimum	To store the number of characters int the smallest word. It may change
i			Counter for the line loop

Returns
Nothing
*/
void CharSmall (string sNametxt) {
    
    //To read lines
    string sLine;
	
    //Look fore a file called like that
    ifstream myfile (sNametxt.c_str());
    
    //Verify that there is a file
	if (myfile.is_open()) {
		
		//Set a value to store the minimum value
    	int iMinimum = INT_MAX;
    	
    	//Read every line
        while (getline (myfile, sLine)) {
        	
        	//Counter fot the number of characters in a word
        	int iCounter=0;
        	
        	//Loop for the characters of the line
			for(int i=0; i<sLine.length(); i++) {
				
				//Validate that only letters and spaces be counted
				if (sLine.at(i) >= 'a' && sLine.at(i) <= 'z' || sLine.at(i) >= 'A' && sLine.at(i) <= 'Z' || 
				sLine.at(i) == ' ' ){
					
					//Add 1 to counter for every character in a word
					iCounter++;
				
					//If there is a space, that word ends
					if (sLine.at(i) == ' ' ) {
						
						//if the counter is smaller than iMinimum
						if (iCounter < iMinimum) {		
							//Make the value of iCounter as the minimum value
							iMinimum = iCounter; 
						}
						
						iCounter = 0; //Set iCounter to 0 again
					}	
				}
			}
		}
        myfile.close(); //Close txt
        cout << iMinimum-1 << endl;
    }
}

/*
CharBig
Option 5. The program will look for a file called like the one that the user gave and then it will compare every 
word. If it finds a word with more letters than the one that it has, it will make the new word as the biggest 
number

Parameters
sLine		To store the characters of a line
iCounter	To store the number of letters in the current word
iMaximum	To store the number of characters int the  biggest word. It may change
i			Counter for the line loop

Returns
Nothing
*/
void CharBig (string sNametxt) {
	
    //To read lines
    string sLine;
	
    //Look fore a file called like that
    ifstream myfile (sNametxt.c_str());
    
    //Verify that there is a file
	if (myfile.is_open()) {
		
		//Set a value to store the maximum value
    	int iMaximum = INT_MIN;
    	
    	//Read every line
        while (getline (myfile, sLine)) {
        	
			//Counter fot the number of characters in a word
        	int iCounter=0; 
        	
			//Loop for the characters of the line
			for(int i=0; i<sLine.length(); i++) {
				
				//Validate that only letters and spaces be counted
				if (sLine.at(i) >= 'a' && sLine.at(i) <= 'z' || sLine.at(i) >= 'A' && sLine.at(i) <= 'Z' || 
				sLine.at(i) == ' ' ){
					
					//Add 1 to counter for every character in a word
					iCounter++;
				
					//If there is a space, that word ends
					if (sLine.at(i) == ' ' ) {
						
						//if the counter is smaller than iMinimum
						if (iCounter > iMaximum) {		
							//Make the value of iCounter as the minimum value
							iMaximum = iCounter; 
						}
						
						iCounter = 0; //Set iCounter to 0 again
					}
				}
			}
		}
        myfile.close(); //Close txt
        cout << iMaximum-1 << endl; //Display value of the maximum number in a word
    }
}

/*
FoundWord
Option 7. The program will look for a file called like the one that the user gave and then it will ask for a 
word to look in the file. If it finds a character in the file that is the same as the first one of the word that
we are looking for, it will compare the rest of the word. If it is te same, will add 1 to the counter

Parameters
sLine		To store the characters of a line
iCounter	To store the number of words found
i			Counter for the line loop
j			Counter for the word int the .txt loop
k			Counter for the word int the word loop

Returns
Nothing
*/
void FoundWord (string sNametxt) {
    
	//To read lines
    string sLine;

    //Look fore a file called like that
    ifstream myfile (sNametxt.c_str());
    
    //Verify that there is a file
	if (myfile.is_open()) {
        
        //Counter for the number of times a word is in the .txt
        int iCounter=0;
        
        //To store the value of the word
        string sWord;
        
        //Ask for the word
		cin >> sWord;
        
		//Read every line 
		while (getline (myfile, sLine)) {
			
			//Loop for the characters of the line
			for(int i=0; i<sLine.length(); i++) {
				
				//If the currect character is the same as the first of the looking word
				if (tolower(sLine.at(i))== tolower(sWord.at(0))) {
					
					//To verify if is the word that we are looking for
					bool bValidation = true;
					int k=i; //Counter for the character of the .txt
					
					//Loop that verify that that the current word is the same as the one that we are looking 
					for (int j=0; j<sWord.length(); j++) {
						
						//If one letter does not match, then it is not the word we are looking for
						if (tolower(sLine.at(k)) != tolower(sWord.at(j))){ 
							bValidation = false; //Define bValidation as fakse
						}
						k++;
					}
					
					//If the word is the one that we are looking, then add 1 to iCounter
					if (bValidation == true) {
						iCounter++;
					}					
				}	
			}
		}
        myfile.close(); //Close txt
        cout << iCounter-1 << endl;
    }
}

/*
ParagraphNumber
Option 8. The program will look for a file called like the one that the user gave and then it will count the 
number of characters in a line. If the number of characters is equal to 0. The program will add 1 to the 
number of paragraphs

Parameters
sLine		To store the characters of a line
iCounter	To store the number of pharagraphs
i			Counter for the line loop
iCHarNum	Counter of the characters in a line

Returns
Nothing
*/
void ParagraphNumber (string sNametxt) {
	
	//To read lines
    string sLine;

    //Look fore a file called like that
    ifstream myfile (sNametxt.c_str());
    
    //Verify that there is a file
	if (myfile.is_open()) {
		
		//Counter for the paragraphs of the .txt
		int iCounter=1;
		
		//Read every line 
		while (getline (myfile, sLine)) {
			
			//Counter for the number of characetrs in a line
			int iCharNum=0;
			
			//Loop that add 1 for every characeter in the line
			for(int i=0; i<sLine.length(); i++ ) {
				iCharNum++;
			}
			
			//If there is no characetrs in the line
			if (iCharNum==0) {
				iCounter++; //Add 1 to the counter of pharagrapsh
			}
		}
        myfile.close(); //Close txt
        cout << iCounter << endl; 
    }
}

/*
main
Here, the main ask for the user to input the name of the file that he is looking for. Then it will ask for the
option that he wants to analyze. Then, the program will look for the user's choise and finalty, make the function 
of his/her choise

Parameters
sNametxt	To store the name of the .txt
cOption		To store the option's user

Returns
0
*/
int main() { 
    
    //To store the name of the .txt
    string sNametxt;
 	
 	//Get name of the .txt
 	getline(cin, sNametxt);
     
    char cOption; //To store the value of the option
    cin >> cOption; //Get value of the option

    if (cOption == '1') { //Option 1
        LineNumber(sNametxt);
    }

    else if (cOption == '2') { //Option 2
        SpaceNumber(sNametxt);
    }

    else if (cOption == '3') { //Option 3
        VowelNumber(sNametxt);
    }

    else if (cOption == '4') { //Option 4
        ConsonantNumber(sNametxt);
    }
	
    else if (cOption == '5') { //Option 5
        CharSmall(sNametxt);
    }
	
    else if (cOption == '6') { //Option 6
        CharBig(sNametxt);
    }
	
    else if (cOption == '7') { //Option 7
        FoundWord(sNametxt);
    }
    
    else if (cOption == '8') { //Option 8
        ParagraphNumber(sNametxt);
    }
    
    //End program 
    return 0;   
}
