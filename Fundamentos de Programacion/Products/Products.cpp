/*
Products.cpp
This application is used to caclulate the biggest and the lowest values of 
a number of products made by machines in a number of days in a company.

Adrian Garcia
Version 1.0 
5/11//2017
*/
#include <iostream>
#include <limits.h>

using namespace std;

int const iMAXROWS = 50; //Maximum number of days
int const iMAXCOLS = 10; //Maximum number of products

/*
GetValues
Function that ask for the user to insert the number of the rows and columns
of the Matrix

Parameters
iArr        Array that store the values of the products made
iRows       Number of days in wich the products were done
iColumnns   Number of machines that made the products
i           Counter of the day's loop
j           Counter of the machine's loop

Returns
Nothing 
*/
void GetValues (int iArr[iMAXROWS][iMAXCOLS], int &iRows, int &iColumns) {
    
    cin >> iRows; //Ask for days
    cin >> iColumns; //Ask for machines
    
    //Validate that rows and columns are positive and biger than 10 and 50
    if (iRows > 0 && iRows <= iMAXROWS && iColumns > 0 && iColumns <= iMAXCOLS) {
        //Beggin loop that ask for every value 
        for (int i=0; i<iRows; i++){ //Loop for rows
                
            for (int j=0; j<iColumns; j++) { //Loop for columns
                
                cin >> iArr[i][j]; //Ask for a value for the array
                
            } //Stop when i > iRows
        }
    }
}

/*
Display
Function that looks for the smallest and biggest values of every row and 
then Display them 

Parameters
iArr        Array that store the values of the products made
iRows       Number of days in wich the products were done
iColumnns   Number of machines that made the products
i           Counter of the day's loop
j           Counter of the machine's loop
iMin        To store the smallest value of the row 
iMax        To store the biggest value of the row

Returns
Nothing 
*/
void Display (int iArr[iMAXROWS][iMAXCOLS], int &iRows, int &iColumns) {
    
    if (iRows > 0 && iRows <= iMAXROWS && iColumns > 0 && iColumns <= iMAXCOLS) {
        //Beggin loop that looks for minimumand maximum values
        for (int i=0; i<iRows; i++){//Loop for rows 
            
            int iMin = INT_MAX; //Define the minimum value
            int iMax = INT_MIN; //Define the maximum value 
            
            for (int j=0; j<iColumns; j++) { //Loop for columns
                
                //Check if th current value is smaller than iMin
                if (iArr[i][j] < iMin) {
                    iMin = iArr[i][j]; //If so, make iMin = iArr[i][j] 
                }  
                
                //Check if the current value is bigger than iMax
                if (iArr[i][j] > iMax) {
                    iMax = iArr[i][j]; //If so, make iMax = iArr[i][j]
                }
            }
            //Display the smallest and biggest values
            cout << iMin << " " << iMax << endl;
        }
    }    
}

/*
main
Uses the functions GetValues and Display to ask for the values and then
look for the smallest and biggest to Display them
*/    
int main() {
    
    int iArr[iMAXROWS][iMAXCOLS]; //To store values of products
    int iRows, iColumns; //To store rows and columns
    
    GetValues (iArr, iRows, iColumns); //Get Values
    Display (iArr, iRows, iColumns); //Display values
    
    //End Program
    return 0;
}
