#pragma once
#include <array>
#include "Pallet.hpp"

class Shelf : public IContainer {
    public:
        array<Pallet, 4> pallets;
        Shelf();
        array<bool, 4> getSlotStatus();
        bool removePallet(int slot);
        bool insertPallet(int slot, Pallet pallet);
        bool isEmpty() override;
        bool isFull() override;
}; 