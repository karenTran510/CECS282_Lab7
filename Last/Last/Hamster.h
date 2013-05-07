#ifndef Hamster_H
#define Hamster_H
#include "Pet.h"
using namespace std;
/*
 *
 */
class Hamster: virtual public Pet
{
	public:
		//Hamster constructor
		Hamster(string name, int hunger, int happy, int clean, int age);

		//These are the attribute modifiers
		void feed();
		void play();
		void cleanIt();

		//Each type of Hamster has a different age
		void setAge(); //can be changed in each class

	private:
		int hunger;
		int happy;
		int clean;
		int age;
		string name;
};
#endif
