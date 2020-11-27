#include "../../std_lib_facilities.h"

int main() {
    double num1;
    double num2;
    while (cin >> num1 >> num2) {
        double smaller = num1 < num2 ? num1 : num2;
        double bigger = num1 > num2 ? num1 : num2;
        if (num1 == num2) {
            cout << "the numbers are equal" << endl;
        } else {
            cout << "the smaller value is: " << smaller << endl;
            cout << "the larger values is: " << bigger << endl;
        }
    }
    return 0;
}