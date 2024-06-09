//
// Created by HP on 27/05/2024.
//

#ifndef USER_H
#define USER_H

#include <string>
#include "DuplicatedDataException.h"
#include <iostream>

using namespace std;

class User {

private:
     string name;
     string email;
     string password;

     User ();
     User (string& pEmail, string& pPassword);
     void setEmail (string& pEmail);

public:
     virtualstring getEmail() const;
     void setName (string pName);
     void setPassword (string& pPassword);

     void getPassword();
     void getName();

}


#endif //USER_H
