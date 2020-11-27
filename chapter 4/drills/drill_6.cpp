//
// 6. Now change the body of the loop so that it reads just one double each time around. Define two variables to keep track of which is the smallest and which is the largest value you have seen so far. Each time through the loop write out the value entered. If it’s the smallest so far, write the smallest so far after the number. If it is the largest so far, write the largest so far after the number.
//

#include "../../std_lib_facilities.h"

int main() {
    double current;
    cin >> current;
    double max = current;
    double min = current;

    while (cin >> current) {
        if (current > max) {
            max = current;
        } else if (current < min) {
            min = current;
        }
    }
    cout << "max is: " << max << " min is: " << min;
    return 0;

}
