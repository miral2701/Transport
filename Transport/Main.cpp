#include <iostream>

#include "Car.h"
#include "Ship.h"
#include "Plane.h"
#include "Tram.h"
#include "Motocycle.h"
using namespace std;

int main()
{
    setlocale(0, "rus");
    Transport* transport = nullptr;

    int choice = 0;

    cout << "1.Машина" << endl;
    cout << "2. Мотоцыкл" << endl;
    cout << "3. Корабыль" << endl;
    cout << "4. Самолет" << endl;
    cout << "5. Трамвай" << endl;

    cout << "Make your choice: ";

    cin >> choice;

    switch (choice)
    {
    case 1:
        transport = new Car();
        transport->Enter("Бензин",180,true);
        break;
    case 2:
        transport = new Motocycle();
        transport->Enter("Дизель", 150, true);
        break;
    case 3:
        transport = new Ship();
        transport->Enter("Бензин", 200, false);
        break;
    case 4:
        transport = new Plane();
        transport->Enter("Бензин", 300, true);
        break;
    case 5:
        transport = new Tram();
        transport->Enter("Електричество", 100, true);
        break;
    }

    transport->Show();
    cout << endl;
    transport->fuelConsumption();
    cout << endl;
    transport->Refueling();


    return 0;
}