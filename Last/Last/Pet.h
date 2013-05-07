#ifndef PET_H
#define PET_H
#include <iostream>
#include <string>
using namespace std;
//Must have namesspace std to properly use type string
/*
 *Pet is an abstract class that serves as a base class for all pets.
 */
class Pet
{

	public:
		//Pet constructor
		Pet(string name, int hunger = 10, int happy = 10, int clean = 10, int age = 0);

		//Getters for the private variables
		int getHungry();
		int getHappy();
		int getClean();
		int getAge();
		int getSick();

		//Setters for the private variables. The pet activites in the derived classes
			//automatically adjusts the pet's attributes.
		void setHungry(int n);
		void setHappy(int n);
		void setClean(int n);
		void changeAge(int n);

		//Pure Virtual functions
		//These functions are going to be modified because each pet wants different things, and that they could         start       off with different ages
		//These are NOT the actual meters.
		virtual void feed(int option)=0;
		virtual void play(int option)=0;
		virtual void cleanIt(int option)=0;
		virtual void setAge()=0;

		//Access and set name for pet
		string getName();
		void setName(string n);

		//Diseases and Cures. Random number generator is contained in here, not in mainfile.
		string getDisease(int s = 3);

        //A method for curing your pet
		void cure();

        //Check on the Pet's hunger, happy, and clean.
		bool Check();

		//Checking status of Pet
        //Menu Display: Name, Hunger, Happy, Clean, Disease
		void Menu();

		//Asking for owner's input.
		//In the mainfile, I casted Pet *p as any animal class. The pointer is important when it comes to calling
            //the correct methods, which is why UserInput(Pet * p) takes in a pointer parameter.
		void UserInput(Pet * p);

	private:
		//These variables ARE the actual meters
		//Feel free to put it in ANY kind of format (number, bar, etc.)	- use STL
		//All pets may be sick with 1 disease out of the two, or not sick at all. Initialize size to 3.
		//Different options for cures should be included in the MAIN FILE
		//REMEMBER THAT DISEASE AFFECTS PET'S AGE
		string name;
		int hunger;
		int happy;
		int clean;
		int age;
		string * disease;
		//Determines the sickness
		int sick;
		//Determines if Pet is cured or not
		bool isCured;
};
#endif


