#pragma once
#include "Animal.h"
#include<iostream>
using namespace std;
class Lion :
    public Animal
{
public:
    void makeSound() const override {
        cout << "Roaring...." << endl;
    }
};

