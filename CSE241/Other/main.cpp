#include<iostream>
#include "BankAccount.h" 
using namespace std;
int main()
{
    BankAccount ilhan(50);
    BankAccount YSA(1000);

    cout << ilhan.getAccount() << endl;
    cout << YSA.getAccount() << endl;
    


}