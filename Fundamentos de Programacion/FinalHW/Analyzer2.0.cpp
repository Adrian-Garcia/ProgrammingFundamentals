//Final Homework
#include <iostream>
#include <string>
#include <fstream>
#include <limits.h>

using namespace std;

//1
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

//2
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

//3
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
    	cout << iCounter-1 << endl; //Display the number of vowels
	}
}

//4
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


//Busca la palabra mas pequeña de un archivo .txt
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
        myfile.close(); //Close txt
        cout << iMinimum-1 << endl;
    }
}

//6
//Aun no jala chido
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
        	
        	//Set counter for the characters of every word
        	int iCounter=0;
        	
        	//Loop for the characters of the line
			for(int i=0; i<sLine.length(); i++) {
				
				if (sLine.at(i) >= 'a' && sLine.at(i) <= 'z' || sLine.at(i) >= 'A' && sLine.at(i) <= 'Z') {
					//Add 1 to counter for every character in a word
					iCounter++;
				}
				
				//If there is a space, that word ends
				if (sLine.at(i) == ' ') {
					
					//if the counter is bigger than iMaximum
					if (iCounter > iMaximum) {
						
						//Make the value of iCounter as the maximum value
						iMaximum = iCounter;
					}
					iCounter = 0; //Set iCounter to 0 again
				}	
			}
		}
        myfile.close(); //Close txt
        cout << iMaximum << endl;
    }
}

//7
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
				if (sLine.at(i) == sWord.at(0)) {
					
					//To verify if is the word that we are looking for
					bool bValidation = true;
					int k=i; //Counter for the character of the .txt
					
					//Loop that verify that that the current word is the same as the one that we are looking 
					for (int j=0; j<sWord.length(); j++) {
						
						//If one letter does not match, then it is not the word we are looking for
						if (sLine.at(k) != sWord.at(j)) { 
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
        cout << iCounter << endl;
    }
}

//8
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
