#pragma once
#include "Animal.h"
#include<iostream>
using namespace std;
class Monkey :
    public Animal
{
public:
    void makeSound() const override {
        cout << "Ohh Ohh Ahh Ahh..." << endl;
    }
};

