//Write a macro in that obtains the largest of 3 numbers
/* Code By Armaan 
Instagram @_a4maan
*/
#include <iostream>
#define MAX(a,b,c) (a>b?(a>c?a:c):(b>c?b:c))
using namespace std;
int main()
{
    int x, y, z;
    cout << "Enter 3 numbers: ";
    cin >> x >> y >> z;
    if (x > y && x > z)
    cout << "The largest number is " << x;
    else if (y > x && y > z)
    cout << "The largest number is " << y;
    else
    cout << "The largest number is " << z;
    return 0;
}
