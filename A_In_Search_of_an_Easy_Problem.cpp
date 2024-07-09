#include <iostream>

using namespace std;

int main() {

    int n, x;

    cin >> n;

    for (int i = 0 ; i < n ; i++) {
        cin >> x;
        if (i == n-1 && x == 0) {
            cout << "EASY";
            return 0;
        } else if (x == 1) {
            cout << "HARD";
            return 0;
        }
    }

    return 0;
}