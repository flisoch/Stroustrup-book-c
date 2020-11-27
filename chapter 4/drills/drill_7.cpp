//
// 7. Add a unit to each double entered; that is, enter values such as 10cm, 2.5in, 5ft, or 3.33m. Accept the four units: cm, m, in, ft. Assume conversion factors 1m == 100cm, 1in == 2.54cm, 1ft == 12in. Read the unit indicator into a string. You may consider 12 m (with a space between the number and the unit) equivalent to 12m (without a space).
// 8. Reject values without units or with “illegal” representations of units, such as y, yard, meter, km, and gallons.

#include "../../std_lib_facilities.h"

int main() {
    double num;
    string measure;
    while (cin >> num >> measure) {
        if (measure == "cm" || measure == "m" || measure == "in" || measure == "ft") {
            cout << "number: " << num << " measure: " << measure << endl;
        } else {
            cout << "unknown measure" << endl;
        }
    }
    return 0;

}
