#include <cstdlib>
#include <iostream>
#include <string>
#include "Dog.h"
using namespace std;

Dog::Dog(string name, int hunger, int happy, int clean, int age): Pet(name, hunger, happy, clean, age)
{

}

void Dog::feed(int option)
{
	switch(option)
	{
        // Feed meat to dog
        case 1:
            setHappy(3);
            setHungry(-4);
            break;
        // Feed kibble to dog
        case 2:
            setHappy(2);
            setHungry(-3);
            break;
        // Give dog a bone
        case 3:
            setHappy(1);
            setHungry(-1);
            break;
        default:
            cout << "Invalid option. Please enter option 1, 2, or 3.";   break;

	}
}
void Dog::play(int option)
{
    switch(option)
    {
        // Take dog out on walk
        case 1:
            setHappy(+2);
            setHungry(-4);
            setClean(-4);
            break;
        // Play fetch with dog
        case 2:
            setHappy(+3);
            setHungry(-3);
            setClean(-3);
            break;
        // Swim with dog
        case 3:
            setHappy(+2);
            setHungry(-3);
            setClean(-3);
            break;
        default:
            cout<<"Invalid option. Please enter option 1, 2, or 3.";  break;

    }
}

void Dog::cleanIt(int option)
{
    switch(option)
	{
        // Brush dog's hair
        case 1:
            setClean(+1);
            setHappy(+1);
            break;
        // Brush dog's teeth
        case 2:
            setClean(+1);
            setHappy(+1);
            break;
        // Give dog bath in bathtub
        case 3:
            setClean(+3);
            setHappy(+2);
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

