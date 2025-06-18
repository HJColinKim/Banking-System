#include <iostream> 
#include<fstream>
#include<string>
#include<string_view>
#include<vector>
#include "header.h"


class Account{ 

    double balance{0}; 
    std::string accountName{"ACCOUNT-HOLDER"}; 

    public: 
    Account(){}; //Default constructor 

    Account(std::string_view name) //Constructor with name 
    : accountName(name), balance(0) {}; 

    //Arguments for getting 
    const std::string_view getName(){
        return accountName; 
    }

    double getBalance(){
        return balance; 
    }

    //Arguments for transfering 
    void transferMoney(double amount, Account account){}

    
}; 
