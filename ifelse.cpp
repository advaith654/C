#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0)
        cout << "Positive number";
    else if (number < 0)
        cout << "Negative number";
    else
        cout << "Zero";

    return 0;
}
