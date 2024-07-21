#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t >0) {

        int x;
        cin >> x;

        int y = x % 10;

        int ans = (y-1) * 10;


        if (x < 10) {
            ans += 1;
        } else if (x < 100) {
            ans += 3;
        } else if (x < 1000) {
            ans += 6;
        } else {
            ans += 10;
        }

        cout << ans << "\n";

        t--;
    }

    return 0;
}