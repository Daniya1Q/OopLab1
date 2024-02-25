#include "Animal.h"
#include "Lion.h"
#include "Elephant.h"
#include "Monkey.h"

void hearSound(const Animal& animal) {
    animal.makeSound();
}

int main() {

    Lion Simba;
    Monkey Boots;
    Elephant Ele;

    cout << "Lion raors: ";
    hearSound(Simba);

    cout << "Boots screaming: ";
    hearSound(Boots);


    cout << "Elephant trumpeting: ";
    hearSound(Ele);


    return 0;
}