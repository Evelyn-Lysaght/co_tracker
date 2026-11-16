//This is for the user to enter one time, and for the program to remember the inputs
//Want to find a way to save this to a file that the user has a password for and reuse every time


#include <iostream>
using namespace std;

#include "User.h"

int Avg_house_kwh( int small_home, int medium_house, int large_house, const double carbon_emmission_factor);

int main () {

    cout << "What type of house do you live in? " << endl;
    cout << "1-2 bed apartment / small home " << "\n" << "2-3 bed house " << "\n" << "4+ bed house " << endl;

    return 0;
}