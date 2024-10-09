#include <iostream>
#include "Shop.h"
int main() {
    Shop shop;

    Overcoat coat1("Winter Coat", "Men's", "L", 100.0);
    Overcoat coat2("Rain Jacket", "Women's", "M", 80.0);
    Overcoat coat3("Kids Overcoat", "Children's", "S", 50.0);

    shop.addOvercoat(coat1);
    shop.addOvercoat(coat2);
    shop.addOvercoat(coat3);

    cout << "Inventory:" << endl;
    shop.displayInventory();

    cout << "\nSearching for Women's overcoats:" << endl;
    shop.searchByType("Women's");

    cout << "\nSorting by price:" << endl;
    shop.sortByPrice();
    shop.displayInventory();

    cout << "\nEditing size of first overcoat to 'XL':" << endl;
    shop.editSize(0, "XL");
    shop.displayInventory();

}
