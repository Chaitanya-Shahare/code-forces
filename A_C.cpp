#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int a, b, n;
        cin >> a >> b >> n;
        
        // Ensure a <= b initially
        if (a > b) {
            swap(a, b);
        }

        int i = 0;

        while (b <= n) {
            a += b;
            swap(a, b);
            i++;
        }

        cout << i << "\n";

        t--;
    }

    return 0;
}
