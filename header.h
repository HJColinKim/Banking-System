#pragma once //header file guard 
#include <string>

class Account{ 

    double balance; 
    std::string accountName; 

    public: 
    Account(){}; //Default constructor 

    Account(std::string_view name) //Constructor with name 
    : accountName(name), balance(0) {}; 

    //Arguments for getting 
    const std::string_view getName() const; 

    double getBalance(); 
    
    //Arguments for transfering 
    void transferMoney(double amount, Account& account); 

    
}; 
