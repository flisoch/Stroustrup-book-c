//
// 8-9. Write a program that reads and stores a series of integers and then computes the sum of the first N integers. First ask for N, then read the values into a vector, then calculate the sum of the first N values.
//


#include "../../std_lib_facilities.h"

int main() {
    try {
        vector<int> numbers;
        string input;
        int sum = 0;
        int numbers_length;
        cout << "enter how many numbers to sum: " << endl;
        cin >> numbers_length;
        cout << "enter numbers to sum: " << endl;
        while (cin >> input) {
            if (input == "|") {
                break;
            }
            numbers.push_back(stoi(input));
        }
        for (int i = 0; i < numbers_length; ++i) {
            sum += numbers[i];
        }
        cout << sum;
    } catch (out_of_range &e) {
        cerr << "Out of range! You asked to sum more numbers than you presented" << endl;
        return 1;
    } catch(exception &err)
    {
        cout<<"Conversion failure: "<< err.what() <<endl;
        cerr << "Input is not integer" << endl;
        return 1;
    }
}