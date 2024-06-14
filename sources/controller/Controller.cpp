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
    ClientOrderContainer& clientOrderContainer = this-> model.getClientOrderContainer();
    do{
        val= this->view.menuClient();
        switch(val){
            case 1:
                runMenu();
                break;
            case 2:
                if (clientOrderContainer.hasClientMadeOrders(loggedClient,ClientOrderContainer)){
                    else{
                        cout << "Client has not made any Orders.";
                    }
                    val= -1
                            break;
                    default:
                        break;
                }
        }while( val!= 0)
            loggout();
    }
}

void Controller::runMenus() {
    string name;
    int val = -1;
    MenuContainer* modelMenuContainerPointer = &this->model.getMenucontainer();
    MenuContainer availableMenuContainer = modelMenuContainerPointer->getAvailable();
    container<Menu> clientMenus = availableMenuContainer.getAll();
    container<Menu> allMenus = modelMenuContainerPointer->getAll();
    if(loggedUser->getEmail) == "dono"){
        this->menuView.printMenuContainerManager(allMenus, "Menus Container:");
    }else{
        this->menuView.printMenuContainerClient(clientMenus, "Menus Container:");
    }

}
void Controller::runDono() {
    int val = -1;
    do{
        val = this->view.menuDono();
        switch(val){
            case 1:runDonoMenus();
                break;
            case 2:runDonoClients();
                break;
            case 3:runDonoSuppliers();
                break;
        }
    }while(val != 0);
}

void Controller::runDonoMenus() {
    MenuContainer& menuContainer = this->model.getMenuContainer();
    container<Menu> menus = menuContainer.getAll();
    this->menuView.printMenuContainerDono(menus, "Menus Container:");

    int val = -1;
    do{
        val = this->view.menuDonoMenus();
        switch(val){
            case 1:runEditMenu();
                this->menuView.printMenuContainerDono(menus, "Menus Container:");
                menus = menuContainer.getAll();
                break;
            case 3:
                runToggleMenuAvailability();
                menus = menuContainer.getAll();
                this->menuView.printMenuContainerDono(menus, "Menus Container:");
                break;
            default:
                break;
        }
    }while(val != 0);
}

void Controller::runDonoSuppliers(){
    SupplierContainer& supplierContainer = this->model.getSupplierContainer();
    container <Supplier> suppliers = supplierContainer.getAll();
    this->supplierView.printSuppliers(suppliers);

    int val = -1;
    do{
        val = this->view.menuDonoSuppliers();
        switch(val){
            case 1:runToggleSupplierState();
                suppliers = supplierContainer.getAll();
                this->supplierView.printSuppliers(suppliers);
                break;
            case 2:runMenus();
                suppliers = supplierContainer.getAll();
                this->supplierView.printSuppliers(suppliers);
                break;
            case 3:runSupplierOrders();
                break;
        }
    }while(val != 0);
}

void Controller::runDonoClients(){
    ClientContainer& clientContainer = this->model.getClientContainer();
    container<Client> clients = clientContainer.getAll();
    this->clientView.printClientContainerDono(clients, "Clients Container:");

    int val = -1;
    do{
        val = this->view.menuDonoClients();
        switch(val){
            case 1:
                runViewAllClientsOrders();
                break;
            case 2:runViewOrdersFromClient();
                break;
            default:
                break;
        }
    }while(val != 0);
}

void Controller::runSupplierOrders(){
    SupplierOrderContainer modelSupplierOrderContainer = this->model.getSupplierOrderContainer();

    if(this->model.getSupplierOrderContainer().getSize(modelSupplierOrderContainer) == 0){
        this->supplierOrderView.thereAreNoOrders();
        return;
    }

    this->supplierOrderView.printSupplierOrders(modelSupplierOrderContainer);
}
void Controller::runViewAllClientsOrders(){
    ClientOrderContainer modelClientOrderContainer = this->model.getClientOrderContainer();

    if(this->model.getClientOrderContainer().getSize(modelClientOrderContainer) == 0){
        this->clientOrderView.thereAreNoOrders();
        return;
    }

    this->clientOrderView.printAllClientOrders(modelClientOrderContainer);
}

void Controller::runViewOrdersFromClient() {
    string clientEmail;
    Client* client;
    ClientOrderContainer modelClientOrderContainer = this->model.getClientOrderContainer();
    if(loggedUser->getEmail() == this->model.getDono()->getEmail()){
        clientEmail = Utils::getString("Insert the email of the client.");
        client = this->model.getClientContainer().getByEmail(clientEmail);
        if(client == nullptr){
            this->clientView.clientNotFound();
            return;
        }
        this->clientOrderView.printClientOrdersByClient(modelClientOrderContainer, *client);
    }
}

void Controller::runToggleSupplierState(){
    SupplierContainer& supplierContainer = this->model.getSupplierContainer();
    string name = this->supplierView.getSupplierName();
    Supplier* supplier = supplierContainer.getByName(name);
    if(supplier == nullptr){
        this->supplierView.invalidSupplier();
        return;
    }else{
        supplierContainer.toggleState(name);
    }
}

void Controller::runClientOrders() {
    ClientOrderContainer tempClientOrderContainer = this->model.getClientOrderContainer();
    this->clientOrderView.printClientOrdersByClient(tempClientOrderContainer, *(Client*)loggedUser);
}

void Controller::runToggleMenuAvailability() {
    string name = this->MenuView.getName();
    MenuContainer& modelMenuContainer = this->model.getMenuContainer();
    if(modelMenuContainer.get(name) == nullptr){
        this->menuView.invalidName();
        return;
    }
    Menu* menu = modelMenuContainer.get(name);
    MenuContainer* cartMenuContainer = this->cart.getMenuContainer();
    modelMenuContainer.toggleAvailability(menu, cartMenuContainer);
}

void Controller::runEditMenu() {
    MenuContainer& menucontainer = this->model.getMenuContainer();
    string name = this->menuView.getNAME();
    if(menucontainer.get(name) == nullptr){
        this->menuView.invalidNAME();
        return;
    }
    Menu tempMenu = this->menuView.getMenu(name);
    menuContainer.edit(tempMenu.getName(), tempMenu.getDescription(),
                       tempMenu.getCategoryFood() , tempMenu.getAmountINStock(),
                       tempMenu.getSupplierPrice(), tempMenu.getSellingPrice(),
                       tempMenu.getIsAvailable());
}