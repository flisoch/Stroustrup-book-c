//
// 4. Do exercise 3 again, but this time handle the error inside ctok().
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

int main() {
    double c = 0;// declare input variable
    cin >> c;
    double k = ctok(c);// convert temperature
    cout << k << endl;// print out temperature
}