#pragma once
#include <vector>
#include "Shelf.hpp"
#include "Employee.hpp"

class Warehouse {
    public:
        vector<Employee> employees;
        vector<Shelf> shelves;

        Warehouse();
        void addEmployee(Employee employee);
        void addShelf(Shelf shelf);
        bool rearrangeShelf(Shelf& shelf);
        bool pickItems(string itemName, int itemCount);
};