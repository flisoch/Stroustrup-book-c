//
// Created by flisoch on 08.11.2020.
//
#include "../../std_lib_facilities.h"

int main() {
    char operation;
    double num1;
    double num2;
    cout << "Enter operation and 2 numbers like this: \n" << "+ 100 3.14 \n";
    cin >> operation >> num1 >> num2;
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