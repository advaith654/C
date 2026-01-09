#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cin >> text;

    int n = text.length();

    for (int i = n - 1; i >= 0; i--) {
        cout << text[i];
    }

    return 0;
}
