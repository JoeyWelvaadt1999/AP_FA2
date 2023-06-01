#include "include/Warehouse.hpp"
#include <algorithm>
#include <iostream>


Warehouse::Warehouse() {
    this->employees = vector<Employee>();
    this->shelves = vector<Shelf>();
}

void Warehouse::addEmployee(Employee employee) {
    this->employees.push_back(employee);
}

void Warehouse::addShelf(Shelf shelf) {
    this->shelves.push_back(shelf);
}

bool Warehouse::rearrangeShelf(Shelf& shelf) {
    if(!this->employees.empty()) {
        Employee emp = this->employees.front();
        if(emp.getForkliftCertificate() && !emp.getBusy()) { 
            sort(shelf.pallets.begin(), shelf.pallets.end(), 
                [](Pallet& a, Pallet& b) { 
                    return a.getItemCount() < b.getItemCount(); 
                    }
                );
            return true;
        } else {
            this->employees.push_back(emp);
            return false;
        }
    }
    return false;
}

bool Warehouse::pickItems(string itemName, int itemCount) {
    for (int i = 0; i < this->shelves.size(); i++)
    {
        if(!this->shelves[i].isEmpty()) {
            array<bool, 4> status = this->shelves[i].getSlotStatus();
            for (int j = 0; j < 4; j++)
            {
                if(!status[j]) {
                    if(this->shelves[i].pallets[j].getItemName() == itemName && this->shelves[i].pallets[j].getItemCount() >= itemCount) {
                        for (int k = 0; k < itemCount; k++)
                        {
                            this->shelves[i].pallets[j].takeOne();
                        }
                        
                        return true;
                    }
                }
            }
            
        }
    }
    return false;
}