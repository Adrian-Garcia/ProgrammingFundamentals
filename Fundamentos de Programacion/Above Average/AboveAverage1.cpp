/*
Aboveavarage.cpp
This application ask for the user tu input certain amount of numbers and the 
program will display the numbers that are above the avarage of the total amount

Version 1.0
Adrian Garcia
23/OCT/2017#FFFFFF
*/
#include <iostream>

using namespace std;
/*
GetValues
This function ask for the user to insert the amount of numbers in the array and
then to insert the numbers that want to be validated. 

Parameters
iArr    Arrage that store the numbers of the user
iN      Amount of numbers in iArr
i       Counter of the loop

Returns
Nothing
*/
void GetValues (int iArr[], int &iN) {
    cin >> iN; //Ask for iN
    
    //Validate that iN is positive and smaller than 15
    if (iN > 0 && iN < 17){
        for (int i=0; i<iN; i++) { //Begin the loop. Stop when i be biger than iN
            cin >> iArr[i]; // Ask for the numbers in the array
        }   
    }
}
/*
Display
This function Display the values that are above avarage

Parameters
iArr        Arrage that store the numbers of the user
iN          Amount of numbers in iArr
i           Counter of the loops
iAvarage    Store the value of the avarage of all the numbers

Returns 
Nothing
*/
void Display (int iArr[], int iN) {
    if (iN > 0 && iN < 17) { //Validate that iN be positive and smaller than 15
        
        //Parameter that store the value of the avarage of the number
        int iAvarage = iArr[0];
            
        //Loop to calculate the total addition of the numbers
        for (int i=1; i<=iN; i++){ //Stop loop when is equal to iN
            iAvarage = iAvarage + iArr[i]; //Add every number of the array
        }
        iAvarage = iAvarage / iN; //Calculate the avarage
        
        //Loop that validates that a number is avobe avarage and the display it
        for (int i=0; i<iN; i++){ 
            if (iArr[i] > iAvarage) { // If a number is bigger than the avarage
                cout << iArr [i] << endl; //Display it
            }
        }
    }
}
/*
Main
In the main we take the values of iN and iArr and insert them in GetValues and
Display

Parameters
iArr    Arrage that store the numbers of the user
iN      Amount of numbers in iArr

Returns
0
*/
int main () {
    
    int iN; //Size of the array
    int iArr[15]; //Array and maximum posible size
    
    GetValues (iArr, iN); //Ask for the values
    Display (iArr, iN); //Display values
    
    //End program
    return 0;
}
