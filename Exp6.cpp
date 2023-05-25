/*Create two classes DM and DB which store the value of distances. DM stores distances 
in meters and centimeters and DB in feet and inches. Write a program that can read 
values for the class objects and odd one object of DM with another object of DB
Use a friend function to carry out the addition operation. The object that stores the results 
may be a DM object or DB object, depending on the units in which the result are required. 
The display should be in the format of feet and inches or meters and centimeters depending 
on the object on display.
*/
/* Code By Armaan 
Instagram @_a4maan
*/
#include <iostream>
using namespace std;

class DB; // Forward declaration

class DM
{
    int m, cm;

public:
    void get()
    {
        cout << "Enter Distance in Meters : ";
        cin >> m;
        cout << "Enter Distance in Centimeters : ";
        cin >> cm;
    }

    void display()
    {
        cout << "Distance: " << m << " meters " << cm << " centimeters" << endl;
    }

    friend void addDistance(DM, DB);
};

class DB
{
    int ft, inch;

public:
    void get()
    {
        cout << "Enter Distance in Feet : ";
        cin >> ft;
        cout << "Enter Distance in Inches : ";
        cin >> inch;
    }

    void display()
    {
        cout << "Distance: " << ft << " feet " << inch << " inches" << endl;
    }

    friend void addDistance(DM, DB);
};

void addDistance(DM d, DB d1)
{
    DM result;
    result.m = d.m + (d1.ft * 0.3048); // Conversion from feet to meters
    result.cm = d.cm + (d1.inch * 2.54); // Conversion from inches to centimeters

    // Display result in meters and centimeters
    cout << "Result: " << result.m << " meters " << result.cm << " centimeters" << endl;
}

int main()
{
    DM d;
    DB d1;

    d.get();
    d1.get();

    addDistance(d, d1);

    return 0;
}
                