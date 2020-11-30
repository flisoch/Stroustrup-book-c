//
// 2. The following program takes in a temperature value in Celsius and converts it to Kelvin. This code has many errors in it. Find the errors, list them, and correct the code
// Here is only correct version without listing of errors
//


#include "../../std_lib_facilities.h"


double ctok(double c)// converts Celsius to Kelvin
{
    double k = c + 273.15;
    return k;
}

int main() {
    double c = 0;// declare input variable
    cin >> c;
    double k = ctok(c);// convert temperature
    cout << k << endl;// print out temperature
}
