//
// Created by HP on 27/05/2024.
//

#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>
#include "User.h"


using namespace std;

class Client{

private:
      string address;
      unsigned int nif;

public:
       Client (string &pEmail , string &pPassword);
       Client (string &email , string &password , string &address , unsigned int nif , string &name);

       Client& get();
       void setAddress (string pAddress);
       void setNif (unsigned int pNif);
       string getAddress() const;
       string getEmail() const;
       string getName() const;
       string getPassword() const;
       const unsigned int getNif();

       bool doesPasswordcorrect(string& password);

       bool operator == (const Client& obj) const;
       bool operator == (string& email) const;

}

#endif //CLIENT_H
