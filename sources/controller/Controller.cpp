//
// Created by HP on 27/05/2024.
//
#include <ioastream>
#include "Utils.h"
#include "Controller.h"
#include "InvalidDataException.h"

Controller::Controller(SaboresIsep& saboresIsep){
    this-> model = saboresIsep;
}
void Controller::run(){
    int val = -1;
    if(this->loggedUser == )nullptr){
    do{
        val= this->view.mainpage();
        switch(val){
            case 1 :runLogin();
            break;
            case 2:runCreateAccount();
            break;
            default:
                break;
        }

    }While(val !=0);
}else{
    runClient();
}
}