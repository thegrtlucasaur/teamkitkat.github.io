#include <iostream>
using namespace std;

int main(){

    int fv, ev, i;
    int o = 0;
    int e = 0;
    
    cout << "Odd And Even Identifier" << endl; 
    cout << "Enter the First Value: ";
    cin >> fv;

    cout << "Enter the End Value: ";
    cin >> ev;
    
    if (fv>ev)
    {
        cout << "ERROR! Starting Number is GREATER THAN the Ending Number!!!";
    }
    else if (fv<ev)
    {
    cout << "Odd Numbers: ";
    i = fv;
    while(i <= ev)
    {
        if(i % 2 !=0)
            o += i;
            if(i % 2 !=0)
            cout << i << " ";
            i++;
    }
    cout << "Sum: "<< o;
    cout << endl;
    
    cout << "Even Numbers: ";
    i = fv;
    while(i <= ev)
    {
        if(i % 2 ==0)
            e += i;
        if(i % 2 ==0)
            cout << i << " ";
            i++;
    }
    cout << "Sum: "<< e;
    }
    return 0;
}