//
// Created by HP on 27/05/2024.
//

#ifndef DONOCONTAINER_H
#define DONOCONTAINER_H

#include <iostream>
#include "User.h"

    class DonoContainer{
    private:
    string email;
    string password;

    DonoContainer ();
    DonoContainer (string& pEmail, string& pPassword);
    void setEmail (string& pEmail);

public:
    void set (string& pEmail , string& pPassword);
}

#endif //DONOCONTAINER_H
