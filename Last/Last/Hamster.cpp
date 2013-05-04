#include <cstdlib>
#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;

//Remember to affect the age of the hamster!
Hamster::Hamster(string name, int hunger, int happy, int clean, int age): Pet(name, hunger, happy, clean, age)
{
};

//This is where you finally modify your attributes
void Hamster::feed(int option)
{
	//Feed the hamster with pellets
	switch (option)
    {
    case 1:
    {
        setHungry(-2);
        setHappy(1);
    } break;
	//Feed hamster with fruits
	case 2:
	{
		setHungry(-2);
		setHappy(+2);
	} break;

	case 3:
	//Feed the hamster apple seeds. Apple seeds are hazardous to hamster! Decrement health and happiness by 3
	{
		//Link this to food sickness. if the pet doesn't already has food sickness
		setHappiness(-3);
		setClean(-3);
		changeAge(0.5);
	} break;
	 default:
        cout << "Invalid option. Please enter option 1, 2, 3";
    }
};

void Hamster::play(int option)
{
	switch (option)
	{
	//Hamster wheel
	case 1:
		setHappiness(+1);
		setHungry(-4);
		setClean(-5);
		break;
	//Put your hamster through a maze
	case 2:
		setHappiness(+2);
		setHungry(-2);
		break;
	//Cuddle with your hamster
	case 3:
		setHappiness(+2);
		setHungry(-3);
		break;
    default:
        cout << "Invalid option. Please enter option 1, 2, 3";
	}
};

void Hamster::cleanIt(int option)
{
	switch(option)
	{
	//clean the cage, set the clean to full
	case 1: setClean(10);
		 setHappy(+1);
		break;
	//water bath. affects health, so decrement age to -0.5
	case 2: setClean(1);
		setHappy(-2);
		changeAge(0.5);
		break;
	//sand bath, set clean to +2 and doesn't affect its health
	case 3:
		setClean(3);
		break;
     default:
        cout << "Invalid option. Please enter option 1, 2, 3";
	}
};

//Lifespan of a hamster is 3 years
void Hamster::setAge()
{
	age = 1;
};

