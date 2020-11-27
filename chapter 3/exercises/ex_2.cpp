//
// Created by flisoch on 08.11.2020.
//
#include "../../std_lib_facilities.h"

int main() {
    double coef{1.609};
    cout << "Enter number of miles:\n";
    double miles;
    cin >> miles;
    cout << miles << " miles is " << miles * coef << " km";
    return 0;
}
