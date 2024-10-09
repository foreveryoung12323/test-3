#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Overcoat {
private:
    string name;
    string type;
    int size;
    double price;

public:
    Overcoat();
    Overcoat(string n, string t, int s, double p);

    void setName(string n);
    string getName() const;

    void setType(string t);
    string getType() const;

    void setSize(int s);
    int getSize() const;

    void setPrice(double p);
    double getPrice() const;

    bool operator==(const Overcoat& other) const;
    bool operator!=(const Overcoat& other) const;
    bool operator>(const Overcoat& other) const;
    bool operator>=(const Overcoat& other) const;
    bool operator<(const Overcoat& other) const;
    bool operator<=(const Overcoat& other) const;

    Overcoat& operator++();
    Overcoat operator++(int);

    Overcoat& operator--();
    Overcoat operator--(int);

    friend istream& operator>>(istream& in, Overcoat& overcoat);
    friend ostream& operator<<(ostream& out, const Overcoat& overcoat);
};
