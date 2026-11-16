//This is where the functions and classes are stored to make the main look tidier.

#include <iostream>
using namespace std;

class Initialise_user {         //here to remember to put it in
    
    char type_house;
    char mode_transport;
    char diet;

    double kwH = 0;

};


//carbon emmission factor is 0.256kg CO2e per kWh

int Avg_house_kwh () {

    int small_home = 275*10^3;  
    int medium_house = 350*10^3;
    int large_house = 500*10^3;

    const float carbon_emmission_factor = 0.256;

    return(int small_home, int medium_house, int large_house, const double carbon_emmission_factor)
}


int Avg_transport_co2e () {

    //in grams/CO2e/km
    int car_petrol = 185;  // (170 - 200 g)
    int car_diesel = 165;  // (150 - 180 g)
    int car_EV = 65;       // (50 - 80 g)
    int bus = 90;          // (80 - 100 g)
    int train = 30;        // (20 - 40 g)
    int bike_walk = 0;     // (0 g) dont need


    return (int car_petrol, int car_diesel, int car_EV, int bus, int train, int bike_walk)
}

int Diet () {

    char d_Vegan, d_vegetarian, d_sometimes, d_often, d_always;

    //x kg/ CO2e / kg
    int beef = 45; //( 27 - 60 kg CO2e per kg);
    
}