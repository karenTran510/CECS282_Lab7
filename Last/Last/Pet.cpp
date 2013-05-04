#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>
#include "Pet.h"
using namespace std;

Pet::Pet(string name, int hunger, int happy, int clean, int age): name(name), hunger(hunger), happy(happy), clean(clean), age(age)
{
};

int Pet::getHungry()
{
	return hungry;
};

int Pet::getHappy()
{
	return happy;
};

int Pet::getClean()
{
	return clean;
};

int Pet::getAge()
{
	return age;
};

int Pet::getSick()
{
    return sick;
}

void Pet::setHungry(int n)
{
    if ((getHungry() + n) > 10)
    {
        hunger = 10;
    }
    if ((getHungry() + n) < 0)
    {
        hunger = 0;
    }
};

void Pet::setHappy(int n)
{
	if ((getHappy() + n) > 10)
    {
        happy = 10;
    }
    if ((getHappy() + n) < 0)
    {
        happy = 0;
    }
};

void Pet::setClean(int n)
{
	if ((getClean() + n) > 10)
    {
        clean = 10;
    }
    if ((getClean() + n) < 0)
    {
        clean= 0;
    }
};

void Pet::changeAge(int n)
{
	age += n;
};


string Pet::getName() {
	return name;
};

void Pet::setName(string n) {
	name = n;
};

//Random number generator is contained in here.
string getDisease(int s)
{
	disease = new string [s];
	//Has Fleas and needs a flea shot
	disease[0] = " has fleas";
	//Food poisoning and needs medicine
	disease[1] = " has food poisoning";
	//Not sick at all
	disease[2] = " is healthy";

	//Random Number Generator
	srand((unsigned)time(0));
    int sick;
    sick = (rand()%3)+1;
    sick = sick -1;

    string output = getName() + disease[sick];

    if (sick == 2)
    {
        isCured = true;
        return output;
    }
    else
    {
        isCured = false;
        return output;
    }
};

void cure()
{
   int s = getSick();
   if (!isCured)
   {
   switch(s)
   {
   case 0: cout << "You gave your pet a flea shot.";
            isCured = true;
            //Make the disease go away
        break;
   case 1: cout << "You gave your pet medicine.";
            isCured = true;
        break;
   default: cout << "Invalid option for cure.";
        break;
   }
   }
}

//Checks the Pet's attributes
//If hunger/clean/happy is equal to 0, the hamster dies and the game is over.
//If the Hamster is 3 years old, it dies.
bool Check()
{
	Hamster * h = Hamster *this;
	if (this->getHunger() == 10 || this->getHappy() == 0) || this->getClean() == 10 || this->getAge() == 3)
	{
		return false;
	}
		return true;
}


//Displays Pet's overall health & checks Pet's lifespan
void Menu()
{
    if (Check())
    {
        //Health Display
        cout << "==" <<getName() <<"'s overall health=="<< endl;
        cout << "Hunger: " << getHungry()<< endl;
        cout << "Happy: " << getHappy() << endl;
        cout << "Clean: " << getClean() << endl;
        cout << "Disease: " << getDisease()<< endl;
    }
    cout << "Game Over." << getName() << " died.";
};

void UserInput()
{
    cout << "What would you like to do with your pet? Enter a number."<< endl;
    //Pet Activities
    cout << "1. Feed" << endl;
    cout << "2. Play" << endl;
    cout << "3. Clean" << endl;
    cout << "4. Cure" << endl;
    cout << "5. Quit" << endl;

    //Takes in the user's input
    int user;
    cin << user << endl;
    switch(user)
    {
    case 1:
        {
            feed();
        }break;
    case 2:
         {
            play();
         }break;
    case 3:
        {
            clean();
        }break;
    case 4:
        {
            cure();
        }
    case 5:
        {
               cout << "Thank you for playing our game. :) \n";
        } break;
    }
};
