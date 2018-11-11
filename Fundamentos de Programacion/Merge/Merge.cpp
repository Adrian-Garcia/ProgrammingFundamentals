/*
Merge.cpp
This applications ask to the user to input 2 arrays, and then order
them.

Adrian Garcia
Version 1.0
26/OCT/2017

*/
#include <iostream>

using namespace std;

/*
GetValues
Function that ask for the user to insert the amount of values that
wants. This will set the size of the arrays. Then it will ask for 
the numbers of the arrays.

Parameters
iN          Size of iArr
iArr        Array that will store the numbers of the user 
i           Counter for the loop

Returns
iN
*/
int GetValues(int iArr[]){

    int iN; //To store the size of the array
    cin >> iN; //Insert array

    //Validate that iN ve positive and smaller than 10
    if (iN>0 && iN<=10){
        
        //Loop that ask for the values of the array
        for (int i=0; i<iN; i++) {
            cin >> iArr[i]; //Insert value
        }
    }
    
    //Return value of iN
    return iN;
}

/*
Display 
This function display those numbers in the array that are even and
positive.

Parameters
iN1         Size of iArr1
iN2         Size of iArr2
iArr1       Firs Array of numbers 
iArr2       Second Array of numbers
iCounter    To store the value of the master counter
i           Counter for the loop

Returns
Nothing
*/
void Display(int iN1, int iN2, int iArr1[],int iArr2[]){
    
    //Validate that iN ve positive and smaller than 10 in both cases
    if ((iN1>0 && iN1<=10) && (iN2>0 && iN2<=10)){
    int iCounter = 0; //Master counter
        
        //Beggin loop. Stop when it is equal to iN1
        for (int i=0; i<iN1; i++){
            
            //Check if the value of iArr2 is smaller than the value in iArr1 
            while (iArr1[i] > iArr2[iCounter] && iCounter < iN2) {
                cout << iArr2[iCounter] << endl; //Display the value in iArr2
                iCounter++; //Add 1 to counter
            } //Stop when iArr2 is no longer smaller than iArr1
            
            //Display the value in iArr1 (This happens if iArr2 is bigger)
            cout << iArr1[i] << endl;
        }
        
        while (iCounter < iN2){
            //Display value of the second array    
            cout << iArr2[iCounter] << endl;    
            iCounter++; //Add 1 to the counter
        }
    }
}

/*
main
here we take the values with GetValues and then display them with 
Display. 

Parameters
iN1      Size of the array 1
iArr1    Values of the array 1
iN2      Size of the array 2
iArr2    Values of the array 2

Returns
0
*/
int main(){
    
    int iN1;            //To store size of the first array
    int iArr1 [10];     //To store the values of the first array
    int iN2;            //To store size of the second array
    int iArr2 [10];     //To store the values of the second array
    
    //Give values for iN1 and iN2
    iN1 = GetValues(iArr1);
    iN2 = GetValues(iArr2);

    //Display values
    Display(iN1, iN2, iArr1, iArr2);
    
    //End program
    return 0;
}