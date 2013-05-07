#ifndef DOG_H
#define DOG_H
#include "Pet.h"
using namespace std;
class Dog: virtual public Pet
{
	public:
		//Dog constructor
		Dog(string name, int hunger, int happy, int clean, int age);

		//These are the attribute modifiers
		void feed(int option);
		void play(int option);
		void cleanIt(int option);

		//Each type of Dog has a different age
		void setAge(); //can be changed in each class

	private:
		int hunger;
		int happy;
		int clean;
		int age;
		string name;
};
#endif

//Dog flu
//Play with Dog or else it will run away
