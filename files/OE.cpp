#include <iostream>
using namespace std;
int main()
{
int starnum;
int endnum;
int g;
int l = 0;
int q = 0;
int SUM;

cout << "\n\nENTER THE STARTING NUMBER: ";
cin >> starnum;
cout << "ENTER THE ENDING NUMBER: ";
cin >> endnum;
if (starnum >= endnum)
cout << "\n\n ERROR! STARTING NUMBER IS GREATER THAN ENDING NUMBER!!!";
if (starnum <= endnum)
cout << "\n\n THE EVEN NUMBERS ARE AS FOLLOWS: ";
g = starnum;
while(g <= endnum)

{
if(g % 2 == 0)
q += g;
if(g % 2 == 0)
cout << g << " ";
g++;
}
cout << "\n SUM OF EVEN: "<< q;
if (starnum <= endnum)
cout << "\n\n THE ODD NUMBERS ARE AS FOLLOWS: ";
g = starnum;
while (g <= endnum)
{
if(g % 2 !=0)
l += g;
if(g % 2 !=0)
cout << g << " ";
g++;
}
cout << "\n SUM OF ODD: "<< l;
return 0;
}
