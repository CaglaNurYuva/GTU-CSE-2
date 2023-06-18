#include<iostream>

using namespace std;

class BankAccount
{
    private:
        int accountMoney;
    public: 
        void increaseAccount(int added);
        int getAccount();
        BankAccount(int money);
};