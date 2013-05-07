#include <cstdlib>
#include <iostream>
#include <string>
#include "Bird.h"
#include "Dog.h"
#include "Hamster.h"
using namespace std;

static int getPetSelect()
{
    int petSelect;
    cout << "Pet Menu Options" << endl;
    cout << "1. Bird" << endl;
    cout << "2. Hamster" << endl;
    cout << "3. Dog" << endl;
    cin >> petSelect;
    return petSelect;
};

int main()
{
    Pet * p1;
    Bird * b;
    Hamster * h;
    Dog * d;
    int option = getPetSelect();
    string animal;
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
    string name;
    cout << "What would you like to name your new adopted " << animal << "?\n";
    cin >> name;
    p1->setName(name);
    do
    {
        p1->Menu();
        p1->UserInput(p1);

    }while(p1->Check());

    return 0;
};
