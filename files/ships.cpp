#include <iostream>
using namespace std;
int main() {
    bool ships [4][4]= {
        {1,1,0,0},
        {0,0,0,0},
        {0,0,0,1},
        {0,0,1,0}
    };
    
    int hits = 0;
    int numofturns = 0;

    while (hits < 4){
        int row, column;

        cout <<"Battle Ships\n";
        cout <<"Select Coordinates\n";

        cout << "Choose a row number between 0 and 3: ";
        cin >> row;

        cout << "Choose a column number between 0 and 3: ";
        cin >> column;

        if (ships[row][column]) {
            ships[row][column] = 0;
            hits++;

            cout << "Hit! " << (4-hits) << " left.\n\n";   
        }else {
            cout << "Miss! Try again.\n\n";
        }
        numofturns++;
    }

    cout << "Victory!\n";
    cout << "You won in " << numofturns <<" turns";

    return 0;

}