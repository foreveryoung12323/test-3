#include "Shop.h"

void Shop::addOvercoat(const Overcoat& overcoat) {
    inventory.push_back(overcoat);
}

void Shop::removeOvercoat(int index) {
    if (index >= 0 && index < inventory.size()) {
        inventory.erase(inventory.begin() + index);
    }
}

void Shop::editSize(int index, int newSize) {
    if (index >= 0 && index < inventory.size()) {
        inventory[index].setSize(newSize);
    }
}

void Shop::searchByType(const string& type) {
    for (const auto& overcoat : inventory) {
        if (overcoat.getType() == type) {
            cout << overcoat << endl;
        }
    }
}

void Shop::sortByPrice() {
    sort(inventory.begin(), inventory.end(), [](const Overcoat& a, const Overcoat& b) {
        return a.getPrice() < b.getPrice();
        });
}

void Shop::displayInventory() {
    for (const auto& overcoat : inventory) {
        cout << overcoat << endl;
    }
}
