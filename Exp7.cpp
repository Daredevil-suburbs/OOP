//Design a constructor for bank account class in c++
#include <iostream>
#include <string>
using namespace std;
class BankAccount
{
/* Code By Armaan 
Instagram @_a4maan
*/
    private:
    string name;
    int id;
    float balance;
    public:
    BankAccount(string n,int i,float b)
    {
        name=n;
        id=i;
        balance=b;
        }
    void deposit(float d)
        {
            balance=balance+d;
            }
    void withdraw(float w)
            {
            if(w>balance)
                {
                    cout<<"Insufficient balance\n";
                    }
            else
                {
                    balance=balance-w;
                        }
                        }
     void display()
                        {
                            cout<<"Name: "<<name<<endl;
                            cout<<"ID: "<<id<<endl;
                            cout<<"Balance: "<<balance<<endl;
                            }
                            };
int main()
 {
 BankAccount b1("Aman",101,1000);
 b1.display();
 b1.deposit(500);
 b1.display(); 
 b1.withdraw(500);
 b1.display();
 return 0;
 }
                                /*
                                OUTPUT:
                                Name: Aman
                                ID: 101
                                Balance: 1500
                                Name: Aman
                                ID: 101
                                Balance: 500
                                */
                               