/*
MaxTickets.cpp
Tis application ask for the number of days and number of shows
per day and ask for the number of tickets sold in heach show. 
The display the day and show that had the biggest number
*/
#include <iostream> 
#include <limits.h>

using  namespace std;

int const iMAXCOLS = 4; //Maximum number of shows possible 
int const iMAXROWS = 30; //Macimum number of days Possible

/*
GetValues
Ask for the number of days and shows and then ask for the
tickets sold

Parameters
iMat[]  Matrix
iNR     Rows of the matrix
iNC     Columns of the matrix
i       Counter for the loop

Return
Nothing

*/
void GetValues (int iMat[][iMAXROWS], int &iNR, int &iNC) {
    
    cin >> iNC; //Ask for number of shows
    cin >> iNR; //Ask for number of days
    
    //Validate that iNC and iNR be positive and bigger than 30 and 14 
    if (iNR > 0 && iNR < 31 && iNC > 0 && iNR < 15) {    
        //Loop for the colums (Shows)
        for (int i=0; i<iNC; i++) {
            //Loop for the Rows (Days)
            for (int j=0; j<iNR; j++) {
                //Ask for the value of the array
                cin >> iMat[i][j];
            }
        }
    }
}

/*
Display
This function looks for the biggest number of the array and 
display the show and day of it

Parameters
iMax    Biggest numebr of the array (It may change)
iIMax   Location in column of the biggesy number of the array (It may change)
iJMax   Location in row of the biggesy number of the array (It may change)
i       Counter of columns
j       Counter of Rows

Returns
Nothing
*/
void Display (int iMat[][iMAXROWS], int &iNR, int &iNC) {
    
    int iMax = INT_MIN; //Set the first number as the biggest one
    int iIMax;  //To store the location in the column
    int iJMax;  //To store the location in the row
    
    //Validate that iNC and iNR be positive and bigger than 30 and 14 
    if (iNC > 0 && iNC < 5 && iNR > 0 && iNR < 31) {
        
        //Loop for the Columns
        for (int i=0; i<iNC; i++) {
            //Loop for the rows
            for (int j=0; j<iNR; j++) {
                /*If a bigger number than iMax is found, make that one to
                be the biggest now. And if that happend, make the column 
                and row the biggest ones as well*/
                if(iMax < iMat [i][j]) {
                    iMax = iMat[i][j];
                    iIMax = i;
                    iJMax = j;
                }
            }
        }
        //Display the column and row of the biggest numbers
        cout << iIMax + 1 << " " << iJMax + 1; 
    }   
}

/*
main
Here, we take the values of the array of GetValues and then put them in the
function Display and look for the biggest number and display the columns and
rows of it
*/
int main () {
    
    int iMat[iMAXCOLS][iMAXROWS];   //Array of the shows and days
    int iNR;            //Store size of the rows
    int iNC;            //Store size of the columns
    
    //Ask for the values
    GetValues(iMat, iNR, iNC);  
    
    //Display the columns and row of the biggest
    Display(iMat, iNR, iNC);      
    
    //End program
    return 0;
}