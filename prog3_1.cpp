#include<iostream>
#include<string>
using namespace std;

class Bank Account{
    private:
            sting owner;
            double balance;

    public:
      void open(const string &name,double initial){
      { 
        owner=name;
        balamce=(initial>0) ? initial:0;
      }
     void deposit(double amt){
        if(amt>0)balance +=amt;
     }
     bool with draw (double amt){
        if(amt>0 && amt<=balance)
     }
     balance-=amt;
     return true;
     }
     return false;
}double getBalance()const{return balance;}