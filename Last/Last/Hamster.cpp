#include <cstdlib>
#include <iostream>
#include <string>
#include "Hamster.h"
using namespace std;

//Remember to affect the age of the hamster!
Hamster::Hamster(string name, int hunger, int happy, int clean, int age): Pet(name, hunger, happy, clean, age)
{
};

//This is where you finally modify your attributes
void Hamster::feed()
{
    cout << "Food options: " << endl;
    cout << "1. Pellets" << endl;
    cout << "2. Fruits\n" << endl;
    cout << "3. Apple seeds\n" << endl;
	int option;
	cin >> option;
	switch (option)
    {
        //Feed the hmaster with pellets
    case 1:
    {
        setHungry(-2);
        setHappy(1);
        cout << this->getName() <<": Nomnomnomnom!\n" << endl;
    } break;
	//Feed hamster with fruits
	case 2:
	{
		setHungry(-2);
		setHappy(+2);
		cout << this->getName() <<": Omnomnomnom!\n" << endl;
	} break;

	case 3:
	//Feed the hamster apple seeds. Apple seeds are hazardous to hamster! Decrement health and happiness by 3
	{
		//Link this to food sickness. if the pet doesn't already has food sickness
		setHappy(-3);
		setClean(-3);
		changeAge(0.5);
		cout << this->getName() <<": Tummy hurts!\n" << endl;
	} break;
	 default:
        cout << "Invalid option. Please enter option 1, 2, 3";  break;
    }
};

void Hamster::play()
{
    cout << "Play options: " << endl;
    cout << "1. Hamster wheel" <<endl;
    cout << "2. Hamster maze"  << endl;
    cout << "3. Cuddle <3\n" <<endl;
    int option;
	cin >> option;
	switch (option)
	{
    //Hamster wheel
	case 1:
	{
	    setHappy(1);
		setHungry(-4);
		setClean(-5);
		cout << this->getName() <<": *Huff* *Puff* *Squeak* *Squeak*\n" << endl;
    }break;
	//Put your hamster through a maze
	case 2:
    {
		setHappy(2);
		setHungry(-2);
		cout << this->getName() <<": Phew! " <<  "I had a lot of fun meandering through that maze! Now, where's my prize?\n" << endl;
    }break;
	//Cuddle with your hamster
	case 3:
    {
		setHappy(2);
		setHungry(-3);
		cout << this->getName()<<": I love you! <3\n" << endl;
    }break;
    default:
    {
        cout << "Invalid option. Please enter option 1, 2, 3";
    }break;
	}
};

void Hamster::cleanIt()
{
    cout << "Clean options: " << endl;
    cout << "1. Clean the cage"<<endl;
    cout << "2. Give " << this->getName() << " a water bath" << endl;
    cout << "3. Give "<< this->getName() << " a sand bath\n" << endl;
    int option;
	cin >> option;
	switch(option)
	{
	//clean the cage, set the clean to full
	case 1:
	{
	    setClean(10);
        setHappy(1);
        cout << this->getName() <<": My home is so clean!\n" << endl;
    }break;
	//water bath. affects health, so decrement age to -0.5
	case 2:
	{
	    setClean(1);
		setHappy(-2);
		changeAge(0.5);
		cout << this->getName()<<": The water made my fur too dry and cold! *Achooooo!*\n" << endl;
    }break;
	//sand bath, set clean to +2 and doesn't affect its health
	case 3:
    {
		setClean(3);
		cout << this->getName()<<": I love the sand!\n" << endl;
    }break;
     default:
     {
        cout << "Invalid option. Please enter option 1, 2, 3";
    }break;
	}
};

//Lifespan of a hamster is 3 years
void Hamster::setAge()
{
	age = 1;
};

