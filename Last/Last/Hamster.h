#ifndef Hamster_H
#define Hamster_H
/*
 *
 */
class Hamster: virtual public Pet
{

	public:
		//Hamster constructor
		Hamster(string name, int hunger, int happy, int clean);

		//These are the attribute modifiers
		void feed(int option);
		void play(int option);
		void cleanIt(int option);

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
