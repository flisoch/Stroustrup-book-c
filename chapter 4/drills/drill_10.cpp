//
// 10. Keep all the values entered (converted into meters) in a vector. At the end, write out those values.
//

#include "../../std_lib_facilities.h"

double to_meters(double num, const string &measure) {
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
    vector<double> measurements;
    double num;
    string measure;
    while (cin >> num >> measure) {
        if (measure == "cm" || measure == "m" || measure == "in" || measure == "ft") {
            cout << "number: " << num << " measure: " << measure << endl;
            double num_m = to_meters(num, measure);
            measurements.push_back(num_m);
        } else {
            cout << "unknown measure" << endl;
        }
    }
    for (double msrmt: measurements) {
        cout << msrmt << "m" << endl;
    }
    return 0;
}