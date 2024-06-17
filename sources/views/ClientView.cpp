#include <iostream>
#include <iomanip> // Include this for setw
#include "ClientView.h"
#include "Utils.h"
#include "InvalidDataException.h"
#include "View.h"
#include <string>
using namespace std;

string ClientView::getEmail() {
    return Utils::getString("Please enter your email"); // Added missing semicolon
}

string ClientView::getPassword() {
    return Utils::getString("Please enter your password"); // Added missing semicolon
}

void ClientView::invalidEmail() { // Changed return type to void
    cout << "Invalid Email" << endl; // Added missing endl
}

void ClientView::incorrectPassword() { // Changed return type to void
    cout << "Incorrect Password" << endl; // Added missing endl
}

void printClientContainerDono(list<Client>& clients, const string& listTitle) {
    cout << listTitle << endl;
    cout << left << setw(NAMESPACING) << "Name";
    cout << left << setw(EMAILPACING) << "Email"; // Corrected EMAILSPACING
    cout << left << setw(ADDRESSSPACING) << "Address";
    cout << left << setw(NIFSPACING) << "Nif";
    cout << endl;

    for (const Client& client : clients) { // Corrected syntax
        cout << left << setw(NAMESPACING) << client.getName();
        cout << left << setw(EMAILPACING) << client.getEmail();
        cout << left << setw(ADDRESSSPACING) << client.getAddress();
        cout << endl;
    }
}

string ClientView::getName() {
    string name;
    int spaceCount;
    do {
        spaceCount = 0;
        name = Utils::getString("Please enter your first and last name");
        for (char c : name) {
            if (c == ' ')
                spaceCount++;
        }
        if (spaceCount == 0)
            cout << "Too few words" << endl;
        if (spaceCount > 1)
            cout << "Too many words" << endl;
    } while (spaceCount != 1);
    return name;
}

string ClientView::getAddress() {
    bool isValidAddress;
    string number, address;
    do {
        address = Utils::getString("Please enter your address (street name and number)");
        size_t pos = address.find_first_of(','); // Corrected syntax
        number = address.substr(0, pos);
        if (!Utils::stringNumber(number)) {
            isValidAddress = false;
        } else {
            isValidAddress = true;
        }
    } while (!isValidAddress);
    return address;
}

void ClientView::ClientNotFound() {
    cout << "Client not found" << endl; // Added missing endl
}