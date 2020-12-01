//
// 5. Add to the program so that it can also convert from Kelvin to Celsius.
//


#include "../../std_lib_facilities.h"

double ctok(double c)// converts Celsius to Kelvin
{
    if (c < -273.15) {
        error("Given number will produce temperature less than absolute zero/-273.15 C/ 0K");
    }
    double k = c + 273.15;
    return k;
}

double ktoc(double k)// converts Celsius to Kelvin
{
    if (k < 0) {
        error("Given number will produce temperature less than absolute zero/-273.15 C/ 0K");
    }
    double c = k - 273.15;
    return c;
}

int main() {
    char choice;
    cout << "choose input measure(k/c): \n";
    cin >> choice;
    double t = 0;// declare input variable
    double converted;
    switch (choice) {
        case 'k':
            cin >> t;
            converted = ktoc(t);
            cout << converted << endl;// print out temperature
            break;
        case 'c':
            cin >> t;
            converted = ctok(t);
            cout << converted << endl;// print out temperature
            break;
        default:
            cout << "don't understand your input measure";
    }
}