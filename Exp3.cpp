//Write a function in C++ using reference variables as arguments to swap the values of a pair of integers.
/* Code By Armaan 
Instagram @_a4maan
*/
#include <iostream>
using namespace std;
void swap(int &a, int &b)//This is the function for swapping so we declared it globally
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    }
int main()//This is the main funcion 
    {
        int a, b;
        cout << "Enter two integers: ";
        cin >> a >> b;
        swap(a, b);
        cout << "After swapping: ";
        cout << a << " " << b << endl;
        return 0;
    }