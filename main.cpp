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
