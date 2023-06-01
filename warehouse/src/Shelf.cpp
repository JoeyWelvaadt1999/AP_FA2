#include "include/Shelf.hpp"

Shelf::Shelf() { 
    this->pallets.fill(Pallet());
}

array<bool, 4> Shelf::getSlotStatus() {
    array<bool, 4> status;
    
    for (int i = 0; i < 4; i++)
    {
        status[i] = this->pallets[i].isEmpty();
    }

    return status;
    
}

bool Shelf::removePallet(int slot) {
    if(!this->isEmpty() && this->getSlotStatus()[slot]) {
        this->pallets[slot] = Pallet();
        return true;
    }
    return false;
}

bool Shelf::insertPallet(int slot, Pallet pallet) {
    if(!this->isFull() && !this->getSlotStatus()[slot]) {
        this->pallets[slot] = pallet;
        return true;
    }
    return false;
}

bool Shelf::isEmpty() {
    bool empty = true;

    for (int i = 0; i < 4; i++)
    {
        if(!this->pallets[i].isEmpty()) {
            empty = false;
        }
    }
    

    return empty;
}

bool Shelf::isFull() {
    bool full = true;

    for (int i = 0; i < 4; i++)
    {
        if(!this->pallets[i].isFull()) {
            full = false;
        }
    }
    

    return full;
}

