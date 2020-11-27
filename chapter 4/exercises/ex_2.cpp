//
// 2. If we define the median of a sequence as “a number so that exactly as many elements come before it in the sequence as come after it,” fix the program in §4.6.3 so that it always prints out a median. Hint: A median need not be an element of the sequence.
//

#include "../../std_lib_facilities.h"

double array_median(Vector<double> vector1);

int main() {
    vector<double> temps;
    cout << "type temperature measurements: \n";
    for (double temp; cin >> temp;)
        temps.push_back(temp);
    sort(temps);
    double median = array_median(temps);
    cout << median;
    return 0;
}

double array_median(Vector<double> vector1) {
    int vector_size = vector1.size();
    double median;
    if (vector_size % 2 == 0) {
        median = (vector1[vector_size / 2 - 1] + vector1[vector_size / 2]) / 2;
    } else {
        median = vector1[vector_size / 2];
    }
    return median;
}
