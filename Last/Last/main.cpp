#include <cstdlib>
#include <iostream>
#include <string>
#include "Bird.h"
#include "Dog.h"
#include "Hamster.h"
#include "Pet.h"
using namespace std;

static int getPetSelect()
{
    int petSelect;
    cout << "Welcome to Karen and Diana's Pretty Pet Project!" << endl;
    cout << "\nPet Menu Options" << endl;
    cout << "1. Bird" << endl;
    cout << "2. Hamster" << endl;
    cout << "3. Dog" << endl;
    cout << "\nSelect an option: ";
    cin >> petSelect;
    return petSelect;
}

int main()
{
    int option = getPetSelect();
    Pet * p1;
    string animal;
    string name;
    cout << "\nWhat would you like to name your new adopted pet?\n";
    cin >> name;
    Bird * b = new Bird(name, 5,10,5,2);
    Hamster * h = new Hamster(name, 5,10,5,2);
    Dog * d = new Dog(name, 5,10,5,2);

    switch(option)
    {
        //The declaration of the classes must be outside the switch case, otherwise, cross initialization occurs.
        //The parameters of the constructor must be filled when creating an object...
    case 1: //b = new Bird(name,10,10,10,2);
            p1 = b;
            animal = "bird";
        break;
    case 2:
            p1 = h;
            animal = "hamster";
        break;
    case 3:
            p1 = d;
            animal = "dog";
        break;
    }

    do
    {
        p1->Pet::Menu();
        p1->Pet::UserInput(p1);

    }while(p1->Pet::Check());

    return 0;
}
