#include<iostream>
using namespace std;

class tollbooth
{
  private:
     int no_paying;
     int no_non_paying;
    double amount;

  public:
    tollbooth()
    {
        no_paying=0;
        no_non_paying=0;
        amount=0.0;
    }
    void payingcar()
    {
        no_paying++;
        amount= amount+0.50;
    }
    void non_payingcar()
    {
        no_non_paying++;
    }
    void printOnConsole()
    {
        cout<<"total number of paying cars is : ("<<no_paying<<")"<<endl;

        cout<<" total number of non paying cars is :("<<no_non_paying<<")"<<endl;

        cout<<"car total is : ("<<no_non_paying+no_paying<<")"<<endl;

        cout<<"Total amount gathered is : RS."<<amount<<endl;
    }

};
int main()
{
    tollbooth t;
    int choice;
    do
    {
        cout<<"enter whether car is paying or not : 0-> exit  1 -> paying   2 -> non-paying  3-> desplaying amount and cars total"<<endl;
        
        cin>>choice;

        switch (choice)
        {
        case 0:
            cout<<"thanks for using "<<endl;
            break;

        case 1:
            t.payingcar();
            break;

        case 2:
            t.non_payingcar();
            break;
        
        case 3:
            t.printOnConsole();
            break;

        default:
            cout<<"enter a valid choice"<<endl;
            break;
        }
    } while (choice!=0);
    
    return 0;
}