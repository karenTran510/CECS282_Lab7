#include <cstdlib>
#include <iostream>
using namespace std;

#include "Dog.h"
#include "Bird.h"
#include "Hamster.h"

static int getPetSelect()
{
    int petSelect;
    cout << "Pet Menu Options" << endl;
    cout << "1. Bird" << endl;
    cout << "2. Hamster" << endl;
    cout << "3. Dog" << endl;
    cin >> petSelect;
    return petSelect;
};


int main()
{

//Greet the user, and prompt them to choose a pet
cout << "Welcome to Karen Tran and Diana Ignacio's pet simulator!";
//Menu : options on which pet the user wants.
    Pet *p;
    do
    {
        int pet = getPetSelect();
        switch (pet)
        {
            case 1:
                Bird *b1;
                p = b1;
                b1->menu();
                b1->UserInput();
                break;
            case 2:
                Hamster *h1;
                p = h1;
                h1->menu();
                h1->UserInput();
                break;
            case 3:
                Dog *d;
                p = d1;
                d1->menu();
                d1->UserInput();
                break;
            default:
                break;
        }while(p.check())
// Will stay in menu loop until pet dies or user decides to quit program
    }
//Switch case on which pet they choose. In the switch case, there will be an initialized pointer object of that pet
//Switch case works the same in c++ as in java. *Use old code! And remember switch only takes in char/int values

return 0;
};
