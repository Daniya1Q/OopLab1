#include<iostream>
#include<string>
using namespace std;

class Dog {
public:
	string name;
	string Breed;
	int age;

		void bark() {
		cout << name << " says Woof!" << endl;
	}

};

class Person {
public:
	string name;
	int age;
	Dog pet;
	void DisplayDogInfo()
	{
		cout << "My name is " << name << "\nMy dog's name is " << pet.name << "\nIts breed is " << pet.Breed << "\nAnd is " << pet.age << " years old." << endl;
	}
	void introducePet()
	{
		cout << "My dog's name is " << pet.name << endl; pet.bark();
	}
};

class House {
public:
	Person people[3];
	int num_people;
	House() : num_people() {

	}
	void addpeople(Person& newPerson) {
		if (num_people < 3) {
			people[num_people++] = newPerson;
		}
	}
	void displayPersons() {
		cout << "No. of People in the House" << endl;
		for (int i = 0; i < 3; i++) {
			cout << "Name: " << people[i].name << ", Age: " << people[i].age << endl;
		}
	}

};

int main() {
	House house;
	//Person 1
	Person person1;
	person1.name = "Siawish";
	person1.age = 18;
	house.addpeople(person1);

	//Person 2 
	Person person2;
	person2.name = "Arham";
	person2.age = 19;
	house.addpeople(person2);

	//Person 3
	Person person3;
	person3.name = "Amaan";
	person3.age = 20;
	house.addpeople(person3);

	house.displayPersons();
	return 0;
}