#include <iostream>
#include "SaboresIsep.h"
#include "mock/MockData.h"
#include "controller.h"

using namespace std;

int main() {
    SaboresIsep saboresIsep("Restaurante");
    saboresIsep.setDono("dono");

    MockData mock;
    mock.generateData(saboresIsep);

    Controller  controller(saboresIsep);
    controller.run();
    cout << "Application has exited" << endl;
    return 0;
}
