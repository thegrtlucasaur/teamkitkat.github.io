#include <iostream>
using namespace std; 
int main (){
    int num1, num2, swap;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2; 
    
    cout << "Given Numbers:" <<endl;
    cout << num1 << ", " << num2 << endl;

    swap = num1;
    num1 = num2;
    num2 = swap;

    cout << "Swapped Values:" << endl;
    cout << num1 << ", " << num2 << endl;

    return 0;
}