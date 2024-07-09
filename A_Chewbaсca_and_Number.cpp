#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    cin >> x;

    for (int i = 0; i < x.size(); ++i) {
        int digit = x[i] - '0';
        int inverted = 9 - digit;
        if (inverted < digit) {
            // Make sure not to create a leading zero
            if (i == 0 && inverted == 0) {
                continue;
            }
            x[i] = inverted + '0';
        }
    }

    cout << x << endl;
    return 0;
}
