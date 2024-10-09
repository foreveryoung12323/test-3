#include "Overcoat.h"

Overcoat::Overcoat() : name(""), type("Men's"), size("M"), price(0.0) {}

Overcoat::Overcoat(string n, string t, string s, double p) : name(n), type(t), size(s), price(p) {}

void Overcoat::setName(string n) {
    name = n;
}

string Overcoat::getName() const {
    return name;
}

void Overcoat::setType(string t) {
    type = t;
}

string Overcoat::getType() const {
    return type;
}

void Overcoat::setSize(string s) {
    size = s;
}

string Overcoat::getSize() const {
    return size;
}

void Overcoat::setPrice(double p) {
    price = p;
}

double Overcoat::getPrice() const {
    return price;
}

bool Overcoat::operator==(const Overcoat& other) const {
    return type == other.type;
}

bool Overcoat::operator!=(const Overcoat& other) const {
    return !(*this == other);
}

bool Overcoat::operator>(const Overcoat& other) const {
    return price > other.price;
}

bool Overcoat::operator>=(const Overcoat& other) const {
    return price >= other.price;
}

bool Overcoat::operator<(const Overcoat& other) const {
    return price < other.price;
}

bool Overcoat::operator<=(const Overcoat& other) const {
    return price <= other.price;
}

Overcoat& Overcoat::operator++() {
    
    return *this;
}

Overcoat Overcoat::operator++(int) {
    Overcoat temp = *this;
    ++(*this);
    return temp;
}

Overcoat& Overcoat::operator--() {
    
    return *this;
}

Overcoat Overcoat::operator--(int) {
    Overcoat temp = *this;
    --(*this);
    return temp;
}

istream& operator>>(istream& in, Overcoat& overcoat) {
    cout << "Enter name: ";
    in >> overcoat.name;
    cout << "Enter type: ";
    in >> overcoat.type;
    cout << "Enter size: ";
    in >> overcoat.size;
    cout << "Enter price: ";
    in >> overcoat.price;
    return in;
}

ostream& operator<<(ostream& out, const Overcoat& overcoat) {
    out << "Name: " << overcoat.name << ", Type: " << overcoat.type
        << ", Size: " << overcoat.size << ", Price: $" << overcoat.price;
    return out;
}
