#include<iostream>
using namespace std;

void electricity(double &electotal, double &kWh, double gridEF);

int main(){
    double electotal, kWh, gridEF = 0.22;

    electricity(electotal, kWh, gridEF);

    cout << "Your electricity carbon footprint for electricity is: " << electotal<<" kg of C02.";

    return 0;
}

void electricity(double &electotal, double &kWh, double gridEF) {
    char renewable;
    int check;

    do {
        cout << "Is your house fully powered by renewable sources (solar panels)?";
        cout << "\nY/N\n";
        cin >> renewable;

        if ((renewable == 'y') || (renewable == 'Y')) {
            electotal = 0;
            cout << "Great! Your carbon footprint from electricity is minimal.\n";
            check = 1;
        }
        else if ((renewable == 'n') || (renewable == 'N')) {
            cout << "If no, enter the kWh from the grid used monthly in your house: ";
            cin >> kWh;

            electotal = kWh * gridEF;
            check = 1;
        }
        else {
            check = 0;
            cout << "Invalid Input.\nPlease input 'Y' or 'N'\n";
        }

    } while (check == 0);
}