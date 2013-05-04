
#ifndef Bird_H
#define Bird_H
#include "Pet.h"
class Bird: virtual public Pet
{

	public:
		//Bird constructor
		Bird(string name, int hunger, int happy, int clean, int age);

		//These are the attribute modifiers

		//Three food options
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

//Bird flu
//Play with bird or else it will fly away
