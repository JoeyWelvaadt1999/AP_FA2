#pragma once
#include "IContainer.hpp"
#include <string>

class Pallet : public IContainer {
    private:
        int _itemCount;
        string _itemName;
        int _itemCapacity;
    
    public:
        Pallet();
        Pallet(string itemName, int itemCapacity, int itemCount);
        string getItemName();
        int getItemCount();
        int getRemainingSpace();
        bool reallocateEmptyPallet(string itemName, int itemCapacity);
        bool takeOne();
        bool putOne();
        bool isEmpty() override;
        bool isFull() override;
};