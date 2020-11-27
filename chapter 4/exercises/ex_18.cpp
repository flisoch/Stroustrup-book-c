//
// 18. Write a program to solve quadratic equations. A quadratic equation is of the form ax2 + bx + c = 0
// If you don’t know the quadratic formula for solving such an expression, do some research. Remember,
// researching how to solve a problem is often necessary before a programmer can teach the computer how to solve it.
// Use doubles for the user inputs for a, b, and c. Since there are two solutions to a quadratic equation,
// output both x1 and x2.
//
// 1 -1 -2 outputs x1=2, x2=-1 which is right


#include "../../std_lib_facilities.h"

int main() {
    double a, b, c;
    cout << "enter a b c coefficients of quadratic equation of the form ax2 + bx + c = 0 " << endl;
    cin >> a >> b >> c;
    double discriminant;
    double root1, root2;
    discriminant = b * b - 4 * a * c;
    root1 = (-b + sqrt(discriminant)) / 2 * a;
    root2 = (-b - sqrt(discriminant)) / 2 * a;
    cout << "x1 is " << root1 << endl << "x2 is " << root2 << endl;
    return 0;
}