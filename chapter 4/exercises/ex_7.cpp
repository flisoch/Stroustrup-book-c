//
// 7. Modify the “mini calculator” from exercise 5 to accept (just) single-digit numbers written as either digits or spelled out.
//

#include "../../std_lib_facilities.h"


double to_double(const string& num);

int main() {
    string num1_str;
    string num2_str;
    char operation;

    cout << "Enter operation and 1-digit numbers in digit or spelled form like this: \n" << "1 + three \n";
    cin >> num1_str >> operation >> num2_str;
    double num1 = to_double(num1_str);
    double num2 = to_double(num2_str);
    switch (operation) {
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            cout << num1 / num2;
            break;
        default:
            cout << "Don't understand you";
    }
    return 0;
}

double to_double(const string& raw_num) {
    double number;
    if (raw_num == "1" || raw_num == "one") {
        number = 1;
    } else if (raw_num == "2" || raw_num == "two") {
        number = 2;
    } else if (raw_num == "3" || raw_num == "three") {
        number = 3;
    } else if (raw_num == "4" || raw_num == "four") {
        number = 4;
    } else if (raw_num == "5" || raw_num == "five") {
        number = 5;
    } else if (raw_num == "6" || raw_num == "six") {
        number = 6;
    } else if (raw_num == "7" || raw_num == "seven") {
        number = 7;
    } else if (raw_num == "8" || raw_num == "eight") {
        number = 8;
    } else if (raw_num == "9" || raw_num == "nine") {
        number = 9;
    } else number = -1;
    return number;
}
