//
// Created by HP on 27/05/2024.
//
#include "User.h"
#include <utility>

using namespace std;

User::User (string& pEmail, string& pPassword){
    setEmail (pEmail);
    setPassword (pPassword);
}

String User ::getEmail() const {
    return this-> username;
}

string User ::getPassword() {
    return this-> password;
}
void User :: setPassword (string &pPassword){
    this-> password =pPassword;
}
void User::setEmail(string &pEmail) {
    this->username =pUsername
}
User::User(){

}