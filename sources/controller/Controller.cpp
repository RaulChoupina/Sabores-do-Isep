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

    } while(val !=0);
}else{
    runClient();
}
}

void Controller::runLogin(){

    string email = this->clientView.getEmail()

    if(email == this->model.getDono()->getEmail()){
        string password = this->clientView.getPassword();
        if(this->model.getDono()->getPassword() == password){
            loggedUser = this->model.getDono();
            cout << "Welcome Big Boss!";
            runDono();
            return;
        }else{
            this->clientView.incorrectPassword();
        }
    }

    ClientContainer& clientContainer = this->model.getClientContainer();
    Client*  tempClient = clientContainer.getByEmail(email);

    if(tempClient == nullptr){
        this->clientView.invalidEmail();
        return;
    }
    string password = this->clientView.getPassword();

    if(tempClient->doesPasswordMatch(password)){
        this->login((User*)tempClient);
        cout<<"Login Successful";
        runClient();
    }else{
        this->clientView.incorrectPassword();
    }

}
void Controller::runCreateAccount() {
    ClientContainer& clientContainer = this->model.getClientContainer();
    string email = this->clientView.getEmail();
    if(email == this->model.getDono()->getEmail()){
        this->clientView.invalidEmail();
        return;
    }
    if(clientContainer.getByEmail(email) != nullptr){
        cout << "Email already taken.";
        return;
    }
    string password = this->clientView.getPassword();
    Client newClient(email, password);
    clientContainer.addClient(newClient);
}

void Controller:: runClient()::{
    int op =-1;
    auto* loggedClient = (Client*)this-> loggedUser;
    ClientOrderContainer& clientOrderConatiner = this-> model.getClientOrderContainer();
    do{
        op= this->view.menuClient();
        switch(op){
            case 1:
                runMenu();
                break;
            case 2:
                if (clientOrderContainer.hasClientMadeOrders(loggedClient,ClientOrderContainer)){
                    else{
                        cout << "Client has not made any Orders.";
                    }
                    op= -1
                    break;
                    case 4:
                        completeRegistration();
                        break;
                    default:
                        break;
                }
        }while (op != 0);
        logout();
    }
}
