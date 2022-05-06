/** \file FinalExam.cpp
*brief Small matrix manipulation program
*athur Christoforos Chari
*date 6/5/22
*/
#include <iostream>
//global constatnt
const int MAX_COLUMN = 3;
using namespace std;

//Fuction Prototypes.
void enterData(int matrix[][MAX_COLUMN],int maxRow);


/**

*/
int main()
{
    int choice;
    do {
       
        cout << "\n1) Enter data in matrix";
        cout << "\n2) Zero out data in matrix";
        cout << "\n3) Are all values positive";
        cout << "\n4)Exit";
        cout << "\nPlease enter choice:";
        cin >> choice;

        switch (choice) {
        case 1:
            break;

        case 2:
            break;

        case 3:
            break;


        case 4:
            //No code needed
            break;

        default:
            cerr << "\n Wrong choice";



        }
    } while (4 != choice);







}

void enterData(int matrix[][MAX_COLUMN], int maxRow)
{
}
