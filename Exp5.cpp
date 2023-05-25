/*Define a class to represent a bank account. Include the following members:
Data members
1.Name of the depositor
2.Account number
3.Type of account
4.Balance amount in the account
 Member functions
1.To assign initial values
2.To deposit an amount
3.To withdraw an amount after checking the balance
4.To display name and balance
Write a main program to test the program.
*/
/* Code By Armaan 
Instagram @_a4maan
*/
#include<iostream>
using namespace std;
class BankAccount
{
    private:
    string Name;
    int AccountNumber;
    string Type;
    float Balance;
    public:
    void AssignInitialValues(string Name,int AccountNumber,string Type,float Balance)
    {
        this->Name=Name;
        this->AccountNumber=AccountNumber;
        this->Type=Type;
        this->Balance=Balance;
        }
        void Deposit(float Amount)
        {
            Balance=Balance+Amount;
            }
         void Withdraw(float Amount)
            {
                if(Balance>=Amount)
                {
                    Balance=Balance-Amount;
                    }
                    else
                    {
                        cout<<"Insufficient balance\n";
                        }
                        }
        void Display()
        {
            cout<<"Name: "<<Name<<"\n";
            cout<<"Account Number: "<<AccountNumber<<"\n";
            cout<<"Type: "<<Type<<"\n";
            cout<<"Balance: "<<Balance<<"\n";
            }
            };
int main()
{
    BankAccount Account;
    Account.AssignInitialValues("Aman",12345,"Savings",1000);
    Account.Withdraw(500);
    Account.Display();
    return 0;
    }
