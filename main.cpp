#include <iostream>
#include "header/model/SaboresIsep.h"

#include "mock/MockData.h"
#include "header/controller/controller.h"

using namespace std;

int main() {
    SaboresIsep saboresIsep("Restaurante");
    saboresIsep.setDono("dono","password");

    MockData mock;
    mock.generateData(saboresIsep);

    Controller  controller(saboresIsep);
    controller.run();
    cout << "Application has exited" << endl;
    return 0;
}
