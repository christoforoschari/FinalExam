/** \file FinalExam.cpp
*brief Small matrix manipulation program
*athur Christoforos Chari
*date 6/5/22
*/
#include <iostream>
#include<assert.h>
#include<cmath>

//global constatnt
const int MAX_COLUMN = 3;

using namespace std;

//Fuction Prototypes.
void enterData(int matrix[][MAX_COLUMN],int maxRow);
void zeroOutData(int matrix[][MAX_COLUMN], int maxRow);
void showData(int matrix[][MAX_COLUMN], int maxRow);

/**
*Present a menu to the users 
*@return Return 0
*/
int main()
{
    const int MAX_ROW = 2;
    int matrix[MAX_ROW][MAX_COLUMN];
    int choice;
    bool admin;
    do {
       
        cout << "\n1) Enter data in matrix";
        cout << "\n2) Zero out data in matrix";
        cout << "\n3) Are all values positive";
        cout << "\n4)Show the data.";
        cout << "\n5)Exit";
        cout << "\nPlease enter choice:";
        cin >> choice;

        switch (choice) {
        case 1:
            enterData(matrix, MAX_ROW);
            break;

        case 2:
            zeroOutData(matrix, MAX_ROW);
            break;

        case 3:
            break;

        case 4:
            showData(matrix,MAX_ROW);
            break;

        case 5:
            //No code needed
            break;

        default:
            cerr << "\n Wrong choice";



        }
    } while (5 != choice); {
        cout << "Thankyou.";
    }







}


/**
*Allows users to fill in the date for the matrix
*@param matrix The matrix to be set to zeros
*@param maxRow the number of rows in the matrix.
*/
void enterData(int matrix[][MAX_COLUMN],const int maxRow)
{
    assert(maxRow > 0);
    for (int i = 0; i < maxRow; i++) {
        for (int j = 0; j < MAX_COLUMN; j++) {
            do {
                cout << "\n Data for [" << i << "][" << j << "](-50 -- 50):";
                cin >> matrix[i][j];
            } while (matrix[i][j] <-50 || matrix[i][j]>50);
            
        }
    }
}

/**
*Data in matrix is filled with 0
*@param matrix The matrix to be filled in
*@param maxRow the number of rows in the matrix.
*/

void zeroOutData(int matrix[][MAX_COLUMN], int maxRow)
{
    assert(maxRow > 0);
    for (int i = 0; i < maxRow; i++) {
        for (int j = 0; j < MAX_COLUMN; j++) {
            matrix[i][j] = 0;
        
        }
    }

}

/**
*Show the data of matrix.
*@param matrix The matrix to be filled in
*@param maxRow the number of rows in the matrix.
*/
void showData(int matrix[][MAX_COLUMN], int maxRow) {
    assert(maxRow > 0);
    for (int i = 0; i < maxRow; i++) {
        for (int j = 0; j < MAX_COLUMN; j++) {

            cout << matrix[i][j] << "\t";
        }
    
    }
}


