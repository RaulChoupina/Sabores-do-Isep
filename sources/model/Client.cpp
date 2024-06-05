//
// Created by HP on 27/05/2024.
//
#include "Client.h"
#include <utility>
#include "User.h"
using namespace std;

Client :: Client(string &pEmail,string &pPassword) : User(pEmail, pPassword){
    this -> setEmail(pEmail);
    this -> setPassword(pPassword);
}

void Client :: setActive(){
    if(isActive == 1){
        cout<< "client already active"<<endl;
        return;
    }
    this ->isActive = true;
}
void Client:: setInactive(){
    if(isActice == 0){
        cout<<"client already inactive"<<endl;
        return;
    }
    this->isActive = false
}
bool Client:: operator== (const Client &obj) const{
    if(this->getEmail() == obj.getEmail()){
        return true;
    }return false;
}

bool Client::operator == (string &Email)const{
    if(this->Email == Email){
        return true;
    }return false;
}
bool Client:: doesPasswordMatch(string &password){
    if(this->password == password){
        return true;
    }return false;

}
string client:: getEmail() const{
    return User:: getEmail();
}
Client :: Client(string &Email,string &password, unsigned int nif): User (Email,Password){
    setEmail(email);
    setPassword(password);
}
string Client :: getPassword()const{
    return password;
}
Cleint &client::get(){
    return *this;
}