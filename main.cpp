//
//  main.cpp
//  Class
//
//  Created by Dhruv Patel on 4/1/20.
//  Copyright © 2020 Dhruv Patel. All rights reserved.
//

#include <iostream>
#include "Account.h"


using namespace std;

int main(){
    Account frank_account;
    frank_account.set_name("Frank Account");
    frank_account.set_balance(1000.0);
    
    if(frank_account.deposit(200.0))
        cout<<"Desposite ok" << endl;
    else
        cout<< "Not okay" << endl;
    
    if(frank_account.withdraw(500.0))
        cout << "Okay" <<endl;
    else
        cout << "No money"<< endl;
    
    if(frank_account.withdraw(1500.0))
        cout << "Okay"<< endl;
    else
        cout <<"Not suffcinet funds"<< endl;
    
    
    
    
    return 0;
}

