#include <cstdlib>
#include <iostream>
#include <string>
#include "Bird.h"
using namespace std;

Bird::Bird(string name, int hunger, int happy, int clean, int age): Pet(name, hunger, happy, clean, age)
{
}

void Bird::feed()
{
    cout << "Feed options: "<<endl;
    cout << "1. Nectar"<<endl;
    cout << "2. Crickets" <<endl;
    cout << "3. Bird seeds\n"<<endl;
	//Bird seeds it'll lower hunger to -3
	int option;
	cin >> option;
	switch(option)
	{
        // Feed nectar
        case 1:
            setHappy(1);
            setHungry(-2);
            cout << "Yum!\n"<<endl;
            break;
        // Feed crickets
        case 2:
            setHappy(1);
            setHungry(-4);
            cout << "Oh, wow! A dinner and a show!\n"<<endl;
            break;
        // Feed bird seeds
        case 3:
            setHappy(2);
            setHungry(-3);
            cout << this->getName() << " feasted happily!\n"<<endl;
            break;
        default:
            cout << "Invalid option. Please enter option 1, 2, or 3."; break;

	}
}
void Bird::play()
{
    cout <<"Play options: " <<endl;
    cout << "1. Put " << this->getName() << " on a swing"<<endl;
    cout << "2. Give " << this->getName() << " a toy"<<endl;
    cout << "3. Put " << this->getName() << " a birdhouse\n"<<endl;
    int option;
	cin >> option;
    switch(option)
    {
        // Put bird on swing
        case 1:
            setHappy(1);
            setHungry(-4);
            setClean(-5);
            cout << this->getName() << "says: "<<"Weeeee! Getting a little hungry!\n"<<endl;
            break;
        // Give bird a toy
        case 2:
            setHappy(2);
            setHungry(-3);
            cout << this->getName() << " says: "<<"Mine! Mine! Mine!\n"<<endl;
            break;
        // Put bird in bird house
        case 3:
            setHappy(2);
            setHungry(-3);
            setClean(-3);
            cout << this->getName() << " says: " << "*Tweet Tweet*\n"<<endl;
            break;
        default:
            cout<<"Invalid option. Please enter option 1, 2, or 3."; break;

    }
}

void Bird::cleanIt()
{
    cout <<"Clean options: " <<endl;
    cout <<"1. Clean the bird cage" <<endl;
    cout << "2. Bird bath"<<endl;
    cout << "3. Spritz " << this->getName() << "with a water spray bottle \n"<<endl;
    int option;
	cin >> option;
    switch(option)
	{
        //clean the cage, set the clean to full
        case 1:
            setClean(10);
            setHappy(1);
            cout << this->getName() << " says: " << "Smells like Febreeze!\n"<<endl;
            break;
        //put in bird bath. affects health, so decrement age to -0.5
        case 2:
            setClean(1);
            setHappy(-2);
            cout << this->getName()<<" says: "<< "Brrr! That bath made me feel chilly!\n"<<endl;
            break;
        // spritz bird with spray bottle
        case 3:
            setClean(3);
            cout << this->getName() << " says: " << "Refreshing! ^_^ \n" << endl;
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
