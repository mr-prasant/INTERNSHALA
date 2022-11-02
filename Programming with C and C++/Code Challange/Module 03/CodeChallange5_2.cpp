/* =======================================================================================================
                                                                                               @prasant.cp
Statement:
Given the following program:

Add a parameterized constructor that initializes all the attributes during object creation.
Create dog objects by calling the parameterized constructor.
========================================================================================================== */

#include <iostream>
#include <string>
using namespace std;

class Dog {

    public:
        string breed;
        int age;
        string color;
        string petName;

        void displayDetails();

        Dog();
        Dog(string breed, int age, string color, string petName);
};

Dog :: Dog() {
    cout << "Dog object created\n";
}

Dog :: Dog(string breed, int age, string color, string petName) {
    this->breed = breed;
    this->age = age;
    this->color = color;
    this->petName = petName;

    displayDetails();
}

void Dog :: displayDetails() {
    cout << "Dog's Pet Name: " << petName << endl << "Breed: " << breed << endl << "Age: " << age << endl << "Color: " << color <<"\n\n";
}


int main() {

    Dog dog1("Dalmatian", 7, "White-black", "Jackie");
    Dog dog2("Beagle", 4, "Brown", "Pluto");

    return 0;
}