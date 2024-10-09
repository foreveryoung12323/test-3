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
    string size;
    double price;

public:
    Overcoat(); 
    Overcoat(string n, string t, string s, double p);

   
    void setName(string n);
    string getName() const;

    void setType(string t);
    string getType() const;

    void setSize(string s);
    string getSize() const;

    void setPrice(double p);
    double getPrice() const;

    // Оператор сравнения
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

