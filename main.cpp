#include <iostream>
#include "header.h"

const std::string_view Account::getName() const{
    return accountName; 
};

double Account::getBalance(){
    return balance; 
}

void Account::transferMoney(double amount, Account& account){
    
} 


int main(){
    Account account1 = Account("Colin Kim"); 
    std::cout << account1.getName() << "\n"; 
    
    return 0; 
}
