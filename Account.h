//
//  Account.h
//  Class
//
//  Created by Dhruv Patel on 4/1/20.
//  Copyright © 2020 Dhruv Patel. All rights reserved.
//

#ifndef Account_h
#define Account_h
#include <string>

class Account{
private:
    std::string name;
    double balance;
    
public:
    void set_balance(double bal){balance =bal;}
    double get_balance(){return balance;}
    
    void set_name (std::string n);
    std::string get_name();
    
    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif /* Account_h */
