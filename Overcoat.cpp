#include "Overcoat.h"

Overcoat::Overcoat() : name(""), type("Men's"), size(38), price(0.0) {}

Overcoat::Overcoat(string n, string t, int s, double p) : name(n), type(t), size(s), price(p) {}

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

void Overcoat::setSize(int s) {
    if (s >= 36 && s <= 52) {
        size = s;
    }
}

int Overcoat::getSize() const {
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
    if (size < 52) {
        ++size;
    }
    return *this;
}

Overcoat Overcoat::operator++(int) {
    Overcoat temp = *this;
    ++(*this);
    return temp;
}

Overcoat& Overcoat::operator--() {
    if (size > 36) {
        --size;
    }
    return *this;
}

Overcoat Overcoat::operator--(int) {
    Overcoat temp = *this;
    --(*this);
    return temp;
}

istream& operator>>(istream& in, Overcoat& overcoat) {
    in >> overcoat.name;
    in >> overcoat.type;
    int s;
    in >> s;
    overcoat.setSize(s);
    in >> overcoat.price;
    return in;
}

ostream& operator<<(ostream& out, const Overcoat& overcoat) {
    out << "Name: " << overcoat.name << ", Type: " << overcoat.type
        << ", Size: " << overcoat.size << ", Price: $" << overcoat.price;
    return out;
}
