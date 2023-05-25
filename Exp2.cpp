//Write a program in C++ to read 2 numbers from the keyboard and display the larger value on the screen.
/* Code By Armaan 
Instagram @_a4maan
*/
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter 2 numbers : ";
    cin>>a>>b;
    if(a>b)
    cout<<"The largest number is : "<<a;
    else
    cout<<"The largest number is : "<<b;
    return 0;
    }

/*#include <stdio.h>
int main()
{ int a,b,c;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b); 
if(a>b) c=a; else c=b; 
printf("The larger value is: %d",c);
 return 0; }
*/
