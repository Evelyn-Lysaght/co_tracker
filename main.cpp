//This is the bit the user enters every month. 

#include <iostream>
#include <windows.h>
using namespace std;

#include "User.h"

int Avg_house_kwh( int small_home, int medium_house, int large_house, const double carbon_emmission_factor)


int main () {

    char knows;

    int house_type, house_kwh;

    cout << "Do you know how many kwh used this month?" << endl;
    cout << "\n yes (Y)" << "\n no (N)" << endl;
    cin >> knows;

    if (knows == 'Y') {
    cout << "How many kwh used this month? " << endl;
    cin >> house_kwh;

    else 
        cout << << "\n (1) Small home" << "\n (2) Medium home" << "\n (3) Large home" << endl;
        // would like to add key up/down and enter to choose an option rather than 1,2,3
        cin >> house_type;

        if (house_type == 1)
        house_kwh = small_home;

        else if (house_type == 2)
        house_kwh = medium_house;

        else if (house_type == 3)
        house_kwh = large_house;

    }

    return 0;
}
