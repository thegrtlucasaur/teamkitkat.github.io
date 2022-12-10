#include <iostream>
using namespace std;
int main ()
{
    float no1, no2, no3;
    cout << "ENTER 3 NUMBERS: ";
    cin >> no1 >> no2 >> no3;
    if (no1 >= no2 && no1 >= no3)
    cout << "LARGEST NUMBER: " << no1;
    {
        if (no2 >= no1 && no2 >= no3)
        cout << "LARGEST NUMBER: " << no2;
        if (no3 >= no1 && no3 >= no2)
        cout << "LARGEST NUMBER: " << no3;
    }
return 0;
}