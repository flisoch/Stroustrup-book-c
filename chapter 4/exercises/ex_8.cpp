//
// 8. There is an old story that the emperor wanted to thank the inventor of the game of chess and asked the inventor
// to name his reward. The inventor asked for one grain of rice for the first square, 2 for the second,
// 4 for the third, and so on, doubling for each of the 64 squares. That may sound modest, but there wasn’t that much
// rice in the empire! Write a program to calculate how many squares are required to give the inventor at least
// 1000 grains of rice, at least 1,000,000 grains, and at least 1,000,000,000 grains. You’ll need a loop, of course,
// and probably an int to keep track of which square you are at, an int to keep the number of grains on the current
// square, and an int to keep track of the grains on all previous squares. We suggest that you write out the value of
// all your variables for each iteration of the loop so that you can see what’s going on.
//

#include "../../std_lib_facilities.h"

int main() {
    int total = 1;
    int square_number = 1;
    int current_square_grains = 1;
    while (square_number != 64) {
        ++square_number;
        current_square_grains *=2;
        total += current_square_grains;
        if (total > 10000000000) {
            cout << "square number with total 1,000,000,000 grains is " << square_number << endl;
            cout << "grains at this square " << current_square_grains << endl;
        } else if (total > 1000000000) {
            cout << "square number with total 100,000,000 grains is " << square_number << endl;
            cout << "grains at this square " << current_square_grains << endl;
        } else if (total > 1000000) {
            cout << "square number with total 100,000 grains is " << square_number << endl;
            cout << "grains at this square " << current_square_grains << endl;
        }
    }

    return 0;
}