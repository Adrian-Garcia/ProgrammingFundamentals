/*
MaxTickets.cpp
Tis application ask for the number of days and number of shows per day and ask for the number
of tickets sold in heach show. Then display the day and show that had the biggest number
*/

#include <iostream>
#include <limits.h>

using namespace std;

int const iMAXROWS = 14; //Maximum number of shows possible 
int const iMAXCOLS = 30; //Maximum number of days possible

/*
GetValues
Ask for the number of days and shows and then ask for the tickets sold

Parameters
iMat    Matrix
iDays   Days of the matrix
iShows  Shows of the matrix
i       Counter for the days loop
j       Counter for the shows loop

Return
Nothing

*/
void GetValues (int iMat[iMAXROWS][iMAXCOLS], int &iDays, int &iShows) {

    cin >> iDays;   //Ask for number of days
	cin >> iShows;  //Ask for number of shows
    
    //Validate that days and showws are positive and smaller than 14 and 30
    if (iDays > 0 && iDays <= iMAXROWS && iShows > 0 && iShows <= iMAXCOLS) { 
        
        for (int i=0; i<iDays; i++) { //loop for the days
            
            for (int j=0; j<iShows; j++) { //Loop for the shows
                	
                cin >> iMat[i][j]; //Insert value
            }
		}
	}
}

/*
GetMax
Calculates the maximum value of the matrix and its day and show 

Parameters
iMat    Matrix
iDays   Days of the matrix
iShows  Shows of the matrix
iMaxD   Day of maximum value
iMaxS   Show of maximum value
i       Counter for the days loop
j       Counter for the shows loop

Returns
Nothing

*/
void GetMax (int iMat[iMAXROWS][iMAXCOLS], int iDays, int iShows, int &iMaxD, int &iMaxS) {
	
	int iMax = INT_MIN; //Minimum posible value

	//Validate that days and showws are positive and smaller than 14 and 30
	if (iDays > 0 && iDays <= iMAXROWS && iShows > 0 && iShows <= iMAXCOLS) {
        
        for (int i=0; i<iDays; i++) { //Loop for the days
           
            for (int j=0; j<iShows; j++) {//Loop for the shows
                
                //If the current value is bigger than iMax
                if (iMat[i][j] > iMax) {
                    
                    iMax = iMat[i][j]; //Set that value as the biggest one
                    iMaxD = i;  //Set the value of i as the biggest one
                    iMaxS = j;  //Set the value of j as the biggest one
                    
                }
			}	
		}
	}
}

/*
Display
Looks for the biggest values of the matrix and display the day and show of them

Parameters
iMat    Matrix
iDays   Days of the matrix
iShows  Shows of the matrix
iMaxD   Day of maximum value
iMaxS   Show of maximum value
i       Counter for the days loop
j       Counter for the shows loop

Returns
Nothing

*/
void Display (int iMat[iMAXROWS][iMAXCOLS], int iDays, int iShows, int iMaxD, int iMaxS) {
	
	int iMax = iMat[iMaxD][iMaxS];  //Set the biggest value
	
	//Validate that days and showws are positive and smaller than 14 and 30
	if (iDays > 0 && iDays <= iMAXROWS && iShows > 0 && iShows <= iMAXCOLS) {
        
        for (int i=0; i<iDays; i++) { //Loop for days
                
                for (int j=0; j<iShows; j++) { //Loop for shows
                    
                    if (iMax == iMat[i][j]) { //Check if the value is the biggest number
                    
                    //If so, display it
                    cout << i+1 << " " << j+1 << endl;
                }
            }
		}	
	}
}

/*
main
Here, we take the values of the array of GetValues and then put them in the
function Display and look for the biggest number and display the columns and
rows of it

Parameters
iDays   To store number of days
iShows  To store number of shows
iMaxD   To store maximum value of day
iMaxS   To sore maximum value of show
*/
int main() {
	
	int iMat[iMAXROWS][iMAXCOLS]; //To store matrix
	
	int iDays, iShows; //To store values of days and shows	
    
    //Ask for values
	GetValues(iMat, iDays, iShows);
	
	int iMaxD, iMaxS; //To store maximum values of day and show
	
	//Ask for Maximum number
	GetMax (iMat, iDays, iShows, iMaxD, iMaxS);
	
	//Display maximum number location
	Display (iMat, iDays, iShows, iMaxD, iMaxS);
	
	//End program
	return 0;
}