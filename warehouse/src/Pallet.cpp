#include "include/Pallet.hpp"

Pallet::Pallet() {
    this->_itemCapacity = INT16_MAX;
    this->_itemCount = 0;
    this->_itemName = "";
}

Pallet::Pallet(string itemName, int itemCapacity, int itemCount) {
    this->_itemName = itemName;
    this->_itemCount = itemCount;
    this->_itemCapacity = itemCapacity;
}

string Pallet::getItemName() {
    return this->_itemName;
}

int Pallet::getRemainingSpace() {
    return this->_itemCapacity - this->_itemCount;
}

int Pallet::getItemCount() {
    return this->_itemCount;
}

bool Pallet::reallocateEmptyPallet(string itemName, int itemCapacity) {
    if(this->isEmpty()) {
        this->_itemName = itemName;
        this->_itemCapacity = itemCapacity;

        return true;
    }
    return false;
}

bool Pallet::takeOne() {
    if(!this->isEmpty()) {
        this->_itemCount -= 1;
        return true;
    }
    return false;
}

bool Pallet::putOne() {
    if(!this->isFull()) {
        this->_itemCount += 1;
        return true;
    }
    return false;
}

bool Pallet::isEmpty() {
    return this->_itemCount == 0;
}

bool Pallet::isFull() {
    return this->_itemCount == this->_itemCapacity;
}


