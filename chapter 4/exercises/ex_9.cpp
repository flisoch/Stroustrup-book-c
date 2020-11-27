//
// 9. Try to calculate the number of rice grains that the inventor asked for in exercise 8 above.
// You’ll find that the number is so large that it won’t fit in an int or a double.
// Observe what happens when the number gets too large to represent exactly as an int and as a double.
// What is the largest number of squares for which you can calculate the exact number of grains (using an int)?
// What is the largest number of squares for which you can calculate the approximate number of grains (using a double)?
//
// it fits in double resulting 1.84467e+19 at 64 square and stops(total=-1) at 32 square if we use ints
#include "../../std_lib_facilities.h"

int main() {
    double total = 1;
//    int total = 1;
    double square_number = 1;
//    int square_number = 1;
    double current_square_grains = 1;
//    int current_square_grains = 1;
    while (square_number != 64) {
        ++square_number;
        current_square_grains *= 2;
        total += current_square_grains;
        cout << square_number << endl << total << endl;
    }

    return 0;
}