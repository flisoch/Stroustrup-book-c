//
// Keep track of the sum of values entered (as well as the smallest and the largest) and the number of values entered. When the loop ends, print the smallest, the largest, the number of values, and the sum of values. Note that to keep the sum, you have to decide on a unit to use for that sum; use meters.
//


#include "../../std_lib_facilities.h"

double to_meters(double num, string measure) {
    double meters;
    if (measure == "cm") {
        meters = num / 100;
    } else if (measure == "in") {
        meters = num * 2.54 / 100;
    } else if (measure == "ft") {
        meters = num * 12 * 2.54 / 100;
    } else if (measure == "m") {
        meters = num;
    } else {
        meters = -1;
    }
    return meters;
}

int main() {
    double num;
    string measure;
    cin >> num >> measure;
    cout << "number: " << num << " measure: " << measure << endl;
    double min = to_meters(num, measure);
    double max = min;
    double sum_m = min;
    while (cin >> num >> measure) {
        if (measure == "cm" || measure == "m" || measure == "in" || measure == "ft") {
            cout << "number: " << num << " measure: " << measure << endl;
            double num_m = to_meters(num, measure);
            sum_m += num_m;
            if (num_m > max) {
                max = num_m;
            } else if (num_m < min) {
                min = num_m;
            }
        } else {
            cout << "unknown measure" << endl;
        }
    }
    cout << "max is: " << max << "m, min is: " << min << "m, sum is: " << sum_m << "m";
    return 0;

}
