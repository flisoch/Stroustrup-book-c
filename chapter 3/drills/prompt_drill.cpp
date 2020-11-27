//
// Created by flisoch on 08.11.2020.
//

#include "../../std_lib_facilities.h"

int main() {
    string first_name;
    cout << "Enter your name!\n";
    cin >> first_name;
    cout << "Hello, " << first_name << "\n";
    string friend_name;
    cout << "Enter your friend's name\n";
    cin >> friend_name;
    cout << "Have you seen my friend " << friend_name << "?\n";
    char friend_sex{0};
    cout << "If your friend is male, enter m, if female, enter f \n";
    cin >> friend_sex;

    if (friend_sex == 'm') {
        cout << "If you see " << friend_name << " please ask him to call me\n";
    } else {
        cout << "If you see " << friend_name << " please ask her to call me.\n";
    }
    int age;
    cout << "Enter your age\n";
    cin >> age;
    if (age < 0 or age > 110) {
        simple_error("you're kidding!");
    } else {
        cout << "I hear you just had a birthday and you are " << age << " years old.";
        if (age < 12) {
            cout << "Next year you will be " << age + 1 << "\n";
        } else if (age == 17) {
            cout << "Next year you will be able to vote\n";
        } else if (age > 70) {
            cout << "I hope you are enjoying retirement.\n";
        }
    }
    cout << "Your sincerely,\n\nRobo";
    return 0;
}