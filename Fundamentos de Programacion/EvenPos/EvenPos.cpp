/*
EvenPos.cpp
This applications ask to the user to input a certain amount of
numbers and then display those who are even and positive, then
the addition of those numbers.

Adrian Garcia
Version 1.0
24/OCT/2917
*/
#include <iostream>

using namespace std;
/*
GetValues
Function that ask for the user to insert the amount of values that
wants. This will set the size of the array. Then it will ask for 
the numbers and select the biggest of all.

Parameters
iN          Size of iArr
iArr        Array that will store the numbers of the user 
i           Counter for the loop

Returns
Nothing
*/
void GetValues (int iArr[], int &iN) {
    cin >> iN; //Ask for the size of the array
    
    //Validate that iN be positive and smaller than 10
    if (iN > 0 && iN < 11){
        
        //Beggin the loop. Stop when it is equal to iN
        for (int i=0; i<iN; i++) { 
            cin >> iArr[i]; //Ask for values for the array
        }   
    }
}
/*
Display 
This function display those numbers in the array that are even and
positive.

Parameters
iN          Size of iArr
iArr        Array that will store the numbers of the user 
iAddition   To store the value of the addition of positive and even numbers
i           Counter for the loop

Returns
Nothing
*/
void Display (int iArr[], int iN) {
    
    //Validate that iN be positive and smaller than 10
    if (iN > 0 && iN < 11) {
        
        //Store the Addition of even and positive numbers. It may change
        int iAddition = 0;
        
        //Beggin loop. Stop when i equals iN
        for (int i=0; i<=iN; i++){
            
            //Validate that the number is positive and even 
            if (iArr[i] > 0 && iArr[i]%2 == 0) {
                
                cout << iArr[i] << endl; //Display positive and even number
                iAddition = iAddition + iArr[i]; //Add the number to the addition
            }
        }
        //Display addition of positive and even number
        cout << iAddition << endl; 
    }
}
/*
main
here we take the values with GetValues and then display them with 
Display. 

Parameters
iN      Size of the array
iArr    Values of the array

Returns
0
*/
int main () {
    int iN; //Store value of te size of the array
    int iArr[15]; //Store the values of the array
    
    GetValues (iArr, iN); //Get values from the user
    Display (iArr, iN); //Display values from the user
    
    //End program
    return 0;
}