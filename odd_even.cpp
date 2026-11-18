/*
 * COS 201 / CSC 207 Assignment
 * Program : Check whether a number is Odd or Even
 *
 * Logic   : A whole number is EVEN if dividing it by 2 leaves no
 *           remainder (number % 2 == 0). Otherwise it is ODD.
 */

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// Returns true if n is even, false if n is odd.
// We compare with 0 (not 1) because in C++ a negative odd number
// leaves a remainder of -1; for example, -7 % 2 == -1.
bool isEven(long long n) {
    return n % 2 == 0;
}

int main() {
    long long number;   // long long can hold very large whole numbers
    string line;

    // Keep asking until the user types a valid whole number.
    while (true) {
        cout << "Enter an integer: ";

        // Stop if there is no more input (Ctrl+D on Linux/macOS, Ctrl+Z on Windows).
        if (!getline(cin, line)) {
            cout << "\nNo number entered. Exiting." << endl;
            return 1;
        }

        // Accept the line only if it holds one whole number and nothing else,
        // so inputs like "abc", "3.5" or "12xyz" are rejected.
        stringstream input(line);
        char extra;
        if (input >> number && !(input >> extra)) {
            break;
        }

        cout << "Invalid input. Please enter an integer such as 7 or -12." << endl;
    }

    if (isEven(number)) {
        cout << number << " is an Even number." << endl;
    } else {
        cout << number << " is an Odd number." << endl;
    }

    return 0;
}
