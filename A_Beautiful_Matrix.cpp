#include <iostream>

using namespace std;

int main() {

    int x;

    for (int i = 0 ; i < 5 ; i++) {
        for ( int j = 0 ; j < 5 ; j++) {
            cin >> x;
            if (x == 1) {
                cout << abs(j - 2) + abs(i - 2);
                return 0;
            }
        }
    }

    return 0;

}