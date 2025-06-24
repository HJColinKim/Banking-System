#include <iostream>
#include "header.h"

const std::string_view Account::getName() const{
    std::cout << accountName << "\n";
    return accountName; 
};

double Account::getBalance(){
    std::cout << balance << "\n"; 
    return balance; 
}

void Account::transferMoney(double amount, Account& account){
    account.addBalance(amount);
    balance -= amount; 
} 

void Account::addBalance(double amount){
    balance += amount; 
}

void Account::removeBalance(double amount){
    balance += amount; 
}

int main(){
    Account account1 = Account("Colin Kim"); 
    account1.getName(); 
    account1.getBalance(); 
    account1.addBalance(50.34); 
    account1.getBalance(); 
    
    return 0; 
}

//1. Create a class for a BANK. A database with a name that stores Accounts 
// - We will need to have a list/map for a database of BANKS too, which each contain accounts, with appropriate searching mechanisms to locate the necessary accounts/banks. 

//2. Add feature of reading transaction files to record transactions and carry out transactions (2 files)
//3. Make sure to design a proper interface so the program can be used by users 
//4. Carefully account for edge cases and system bugs 