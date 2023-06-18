#include "BankAccount.h"

BankAccount::BankAccount(int money)
{
    accountMoney = money;
}
void BankAccount::increaseAccount(int added)
{
    accountMoney += added;
}

int BankAccount::getAccount()
{
    return accountMoney;
}