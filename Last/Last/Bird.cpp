
#include <iostream>
#include "Bird.h"
using namespace std;

Bird::Bird(string name, int hunger, int happy, int clean, int age): Pet(name, hunger, happy, clean, age)
{

}

void Bird::feed(int option)
{
	//Bird seeds it'll lower hunger to -3
	switch(option)
	{
        // Feed nectar
        case 1:
            setHappy(1);
            setHungry(-2);
            break;
        // Feed crickets
        case 2:
            setHappy(1);
            setHungry(-4);
            break;
        // Feed bird seeds
        case 3:
            setHappy(2);
            setHungry(-3)
            break;
        default:
            cout << "Invalid option. Please enter option 1, 2, or 3."

	}
}
void Bird::play(int option)
{
    switch(option)
    {
        // Put bird on swing
        case 1:
            setHappiness(+1);
            setHungry(-4);
            setClean(-5);
            break;
        // Give bird a toy
        case 2:
            setHappiness(+2);
            setHungry(-3);
            break;
        // Put bird in bird house
        case 3:
            setHappiness(+2);
            setHungry(-3);
            setClean(-3);
            break;
        default:
            cout<<"Invalid option. Please enter option 1, 2, or 3.";

    }
}

void Bird::cleanIt(int option)
{
    switch(option)
	{
        //clean the cage, set the clean to full
        case 1:
            setClean(10);
            setHappy(+1);
            break;
        //put in bird bath. affects health, so decrement age to -0.5
        case 2:
            setClean(1);
            setHappy(-2);
            break;
        // spritz bird with spray bottle
        case 3:
            setClean(3);
            break;
        default:
            cout<<"Invalid option. Please enter option 1, 2, or 3.";
            break;
	}
}

void Bird::setAge()
{
   age = 1;
}
