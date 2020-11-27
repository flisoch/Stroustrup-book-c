//
// 3. Read a sequence of double values into a vector. Think of each value as the distance between two cities along a given route. Compute and print the total distance (the sum of all distances). Find and print the smallest and greatest distance between two neighboring cities. Find and print the mean distance between two neighboring cities.
//

#include "../../std_lib_facilities.h"

double vector_sum(Vector<double> Vector);

double vector_min(Vector<double> Vector);

double vector_max(Vector<double> Vector);

int main() {
    vector<double> distances;
    cout << "insert distances:\n";
    for (double distance; cin >> distance;) {
        distances.push_back(distance);
    }
    double total_distance = vector_sum(distances);
    double smallest_distance = vector_min(distances);
    double greatest_distance = vector_max(distances);
    double mean_distance = total_distance / distances.size();
    cout << "total distance: " << total_distance << endl;
    cout << "smallest distance: " << smallest_distance << endl;
    cout << "greatest distance: " << greatest_distance << endl;
    cout << "mean distance: " << mean_distance << endl;
    return 0;
}

double vector_max(Vector<double> Vector) {
    double greatest = -1;
    for (double num:Vector) {
        if (num > greatest) {
            greatest = num;
        }
    }
    return greatest;
}

double vector_min(Vector<double> Vector) {
    double min = 100000000;
    for (double num:Vector) {
        if (num < min) {
            min = num;
        }
    }
    return min;
}

double vector_sum(Vector<double> Vector) {
    double sum = 0;
    for (double num: Vector) {
        sum += num;
    }
    return sum;
}
