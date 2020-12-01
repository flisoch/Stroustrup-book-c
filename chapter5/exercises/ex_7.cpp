//
// Quadratic equations are of the form a · x2 + b · x + c = 0
//To solve these, one uses the quadratic formula: ...
//There is a problem, though: if b2–4ac is less than zero, then it will fail. Write a program that can calculate x for a quadratic equation. Create a function that prints out the roots of a quadratic equation, given a, b, c. When the program detects an equation with no real roots, have it print out a message. How do you know that your results are plausible? Can you check that they are correct?
//


#include "../../std_lib_facilities.h"

int main() {
    double a, b, c;
    cout << "enter a b c coefficients of quadratic equation of the form ax2 + bx + c = 0 " << endl;
    cin >> a >> b >> c;
    double discriminant;
    double root1, root2;
    discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        cout << "equation doesn't have real roots";
    } else {
        root1 = (-b + sqrt(discriminant)) / 2 * a;
        root2 = (-b - sqrt(discriminant)) / 2 * a;
        cout << "x1 is " << root1 << endl << "x2 is " << root2 << endl;
    }
    return 0;
}