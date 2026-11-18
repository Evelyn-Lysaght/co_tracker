#include <iostream>
using namespace std;

// Returns annual diet emissions in kg CO2e
double dietFootprint() {
    int choice = 0;

    while (choice < 1 || choice > 6) {
        cout << "\nWhich best describes your diet?\n"
             << "1. Meat in most meals\n"
             << "2. Average (some meat)\n"
             << "3. Low meat\n"
             << "4. Pescatarian\n"
             << "5. Vegetarian\n"
             << "6. Vegan\n"
             << "Enter 1-6: ";
        if (!(cin >> choice)) {      // non-number typed
            cin.clear();
            cin.ignore(1000, '\n');
            choice = 0;
        }
        if (choice < 1 || choice > 6)
            cout << "Invalid choice, try again.\n";
    }

    // kg CO2e per day (placeholder figures)
    double perDay;
    switch (choice) {
        case 1: perDay = 7.2; break;
        case 2: perDay = 5.6; break;
        case 3: perDay = 4.7; break;
        case 4: perDay = 3.9; break;
        case 5: perDay = 3.8; break;
        default: perDay = 2.9; break;
    }

    return perDay * 365;
}
