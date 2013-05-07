#include <cstdlib>
#include <iostream>
#include <string>
#include "Dog.h"
using namespace std;

Dog::Dog(string name, int hunger, int happy, int clean, int age): Pet(name, hunger, happy, clean, age)
{

}

void Dog::feed()
{
    cout << "Feed options: " << endl;
    cout << "1. Meat " << endl;
    cout << "2. Dog Kibble " << endl;
    cout << "3. Bone \n" << endl;
	int option;
	cin >> option;
	switch(option)
	{
        // Feed meat to dog
        case 1:
            setHappy(3);
            setHungry(-4);
            cout << "Yum!\n" << endl;
            break;
        // Feed kibble to dog
        case 2:
            setHappy(2);
            setHungry(-3);
            cout << "*Gobbles kibble*\n" << endl;
            break;
        // Give dog a bone
        case 3:
            setHappy(1);
            setHungry(-1);
            cout << this->getName() << " says: "<< "Where's the meat?\n" << endl;
            break;
        default:
            cout << "Invalid option. Please enter option 1, 2, or 3.\n";   break;

	}
}
void Dog::play()
{
    cout << "Play options: " << endl;
    cout << "1. Take " << this->getName() << " out for a walk" << endl;
    cout << "2. Play fetch " << endl;
    cout << "3. Swim with " << this->getName()<< "\n"<<endl;
    int option;
	cin >> option;
    switch(option)
    {
        // Take dog out on walk
        case 1:
            setHappy(+2);
            setHungry(-4);
            setClean(-4);
            cout << this->getName() <<": Sunshine! Squirrel! Poodle!\n" << endl;
            break;
        // Play fetch with dog
        case 2:
            setHappy(+3);
            setHungry(-3);
            setClean(-3);
            cout << this->getName() <<": throw the ball!\n" << endl;
            break;
        // Swim with dog
        case 3:
            setHappy(+2);
            setHungry(-3);
            setClean(-3);
            cout << this->getName() <<": *Doggy paddle*\n" << endl;
            break;
        default:
            cout<<"Invalid option. Please enter option 1, 2, or 3.";  break;

    }
}

void Dog::cleanIt()
{
    cout << "Clean options: " << endl;
    cout << "1. Brush "<< this->getName() << "'s fur" << endl;
    cout << "2. Brush "<< this->getName() << "'s teeth" << endl;
    cout << "3. Bathe \n" << endl;
    int option;
	cin >> option;
    switch(option)
	{
        // Brush dog's hair
        case 1:
            setClean(+1);
            setHappy(+1);
            cout << this->getName() << ": Brush me from muzzle to paw!\n"<< endl;
            break;
        // Brush dog's teeth
        case 2:
            setClean(+1);
            setHappy(+1);
            cout << this->getName() << " says: *Ahhhhhh*\n" << endl;
            break;
        // Give dog bath in bathtub
        case 3:
            setClean(+3);
            setHappy(+2);
            cout << this->getName() << " says: I don't need a bath\n" << endl;
            break;
        default:
            cout<<"Invalid option. Please enter option 1, 2, or 3.";
            break;
	}
}

void Dog::setAge()
{
   age = 7;
}

