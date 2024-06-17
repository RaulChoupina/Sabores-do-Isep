//
// Created by HP on 27/05/2024.
//

#include <iostream>
#include <iomanip> // Include iomanip for setw
#include "SupplierOrderView.h"
#include "Utils.h"
#include "../../header/controller/controller.h" // Adjust path as needed
#include "../../header/model/SaboresIsep.h" // Adjust path as needed

using namespace std;

// Constructor definition
controller::controller(SaboresIsep& saboresIsep) {
    this->model = saboresIsep;
}

// Member function definitions
void controller::run() {
    int val = -1;
    if (this->loggedUser == nullptr) {
        do {
            val = this->view.mainpage();
            switch (val) {
                case 1:
                    runLogin();
                    break;
                case 2:
                    runCreateAccount();
                    break;
                default:
                    break;
            }
        } while (val != 0);
    } else {
        runClient();
    }
}

void controller::runLogin() {
    string email = this->clientView.getEmail();

    if (email == this->model.getDono()->getEmail()) {
        string password = this->clientView.getPassword();
        if (this->model.getDono()->getPassword() == password) {
            loggedUser = this->model.getDono();
            cout << "Welcome Big Boss!";
            runDono();
            return;
        } else {
            this->clientView.incorrectPassword();
        }
    }

    ClientContainer& clientContainer = this->model.getClientContainer();
    Client* tempClient = clientContainer.getByEmail(email);

    if (tempClient == nullptr) {
        this->clientView.invalidEmail();
        return;
    }

    string password = this->clientView.getPassword();

    if (tempClient->doesPasswordMatch(password)) {
        login((User*)tempClient); // Assuming login function sets the loggedUser correctly
        cout << "Login Successful";
        runClient();
    } else {
        this->clientView.incorrectPassword();
    }
}

void controller::runCreateAccount() {
    ClientContainer& clientContainer = this->model.getClientContainer();
    string email = this->clientView.getEmail();
    if (email == this->model.getDono()->getEmail()) {
        this->clientView.invalidEmail();
        return;
    }
    if (clientContainer.getByEmail(email) != nullptr) {
        cout << "Email already taken.";
        return;
    }
    string password = this->clientView.getPassword();
    Client newClient(email, password);
    clientContainer.addClient(newClient);
}

// Implement other member functions as per your original design

