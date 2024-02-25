#pragma once
#include "Animal.h"
#include<iostream>
using namespace std;
class Elephant :
    public Animal
{
public:
    void makeSound() const override {
        cout << "Hathi Mera Sathi " << endl;
    }
};

