#include "Overcoat.h"

class Shop {
private:
    vector<Overcoat> inventory;

public:
    void addOvercoat(const Overcoat& overcoat);
    void removeOvercoat(int index);
    void editSize(int index, int newSize);
    void searchByType(const string& type);
    void sortByPrice();
    void displayInventory();
};
