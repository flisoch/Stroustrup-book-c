//
// Created by flisoch on 11.11.2020.
//

#include "../../std_lib_facilities.h"

int main() {
    int num1;
    int num2;
    while (cin >> num1 >> num2) {
        int smaller = num1 < num2 ? num1 : num2;
        int bigger = num1 > num2 ? num1 : num2;
        if (num1 == num2) {
            cout << "the numbers are equal" << endl;
        } else {
            cout << "the smaller value is: " << smaller << endl;
            cout << "the larger values is: " << bigger << endl;
        }
    }
    return 0;
}