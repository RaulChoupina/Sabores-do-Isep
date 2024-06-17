//
// Created by HP on 27/05/2024.
//

#include <iostream>
#include "../model/User.h"

using namespace std;

User::User (string& pEmail, string& pPassword){
    setEmail (pEmail);
    setPassword (pPassword);
}

string User ::getEmail() const {
    return this-> email;
}

string User ::getPassword() {
    return this-> password;
}
void User :: setPassword (string &pPassword){
    this-> password =pPassword;
}
void User::setEmail(string &pEmail) {
    this->email =pEmail
}
User::User(){

}