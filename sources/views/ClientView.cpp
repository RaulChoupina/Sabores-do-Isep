//
// Created by HP on 27/05/2024.
//
#include <iostream>
#include "ClientView.h"
#include "Utils.h"
#include "InvalidDataException.h"
#include "View.h"

using namespace std;

string ClientView :: getEmail(){
    return Utils:: getString ("Please enter your email")
}
string ClientView :: getPassword(){
    return Utils:: getString ("Please enter your password")
}
string ClientView :: invalidEmail(){
    cout << "Invalid Email";
}
string ClientView :: incorrectPassword(){
    cout << "Incorrect Password";
}
void printClientContainerDono(list<Client>& clients, const string& listTitle){
    cout << listTitle << endl;
    cout << left << setw(NAMESPACING) << "Name";
    cout << left << setw(EMAILPACING) << "Email";
    cout << left << setw(ADDRESSSPACING) << "Address";
    cout << left << setw(NIFSPACING) << "Nif";
    cout << endl;

    for (Client client : clients]{
    cout << listTitle << endl;
    cout << left << setw(NAMESPACING) << client.getName();
    cout << left << setw(EMAILPACING) <<  client.getEmail();
    cout << left << setw(ADDRESSSPACING) <<  client.getAddress();
    cout << left << setw(NIFSPACING) <<  client.getNif();
    cout << endl;
    }
}
string ClientView:: getName(){
string name;
int spaceCount;
    do{
    spaceCount = 0;
        name = Utils::getString("Please enter your first and last name");
        for(int i = 0; name[i] != '\0'; i++){
            if(name[i] == ' ')
                spaceCount++;
        }
        if(spaceCount == 0)
            cout << "Too few words" << endl;
        if(spaceCount > 1)
            cout << "Too many words" << endl;
    }while(spaceCount !=1);
    return  name;
}
string ClientView:: getAddress(){
      bool isValidAddress;
      string number, address, street name;
   do{
      address = Utils::getString("Please enter your address (street name and number)");
      size_t pos = address.find.first_of(',');
      number = address.substr (0,pos);
      if(!Utils::stringNumber(number)){
        isValidAddress = false;
      }else{
        isValidAddress = true;
      }
   }while(!isValidAddress);
   return address;
}
unsigned int ClientView:: getNif(){
    unsigned int nif;
    do{
         nif = Utils::getUInt("Please enter your nif");
    }while( nif < 100000000 || nif > 999999999);
    return nif;
}
void ClientView::ClientNotFound(){
    cout << "Client not found";
}