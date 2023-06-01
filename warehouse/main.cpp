#include "src/include/Warehouse.hpp"
#include <iostream>

int main () {
    Pallet p1("Tables", 8, 6);
    Pallet p2("Mirrors", 9, 2);
    Pallet p3("Chairs", 7, 1);
    Pallet p4("Plates", 12, 4);

    Shelf s = Shelf();
    s.insertPallet(0, p1);
    s.insertPallet(1, p2);
    s.insertPallet(2, p3);
    s.insertPallet(3, p4);

    Employee e1("Joey", true);
    Employee e2("Brandon", true);

    Warehouse w = Warehouse();

    w.addShelf(s);

    w.addEmployee(e2);
    w.addEmployee(e1);


    array<bool, 4> status = s.getSlotStatus();
    for (int i = 0; i < 4; i++)
    {
        cout << w.shelves[0].pallets[i].getItemCount() << endl;
        // cout << status[i] << endl;
        cout << s.pallets[i].getItemName() << endl;
    }

    cout << "Rearrange: " << w.rearrangeShelf(s) << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << s.pallets[i].getItemCount() << endl;
        // cout << status[i] << endl;
        // cout << s.pallets[i].getItemName() << endl;
    }
    
    // cout << "hello world my name is " << e1.getName() << endl;
    return 0;
}