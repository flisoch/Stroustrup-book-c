//
// Created by flisoch on 08.11.2020.
//
#include "../../std_lib_facilities.h"

int main() {
    cout << "Enter 2 numbers: \n";
    int val1;
    int val2;
    cin >> val1 >> val2;
    int smaller = val1 < val2 ? val1 : val2;
    int larger = val1 > val2 ? val1 : val2;
    int difference = val1 - val2;
    int product = val1 * val2;
    double ratio = static_cast<double>(val1) / val2;
    cout << "Smaller: " << smaller << endl;
    cout << "Larger: " << larger << endl;
    cout << "Difference: " << difference << endl;
    cout << "product: " << product << endl;
    cout << "Ration: " << ratio << endl;
    return 0;
}