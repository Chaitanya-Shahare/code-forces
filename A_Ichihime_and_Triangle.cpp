#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while ( t > 0 ) {

        int a,b,c,d;
        cin >> a >> b >> c >> d;

        int x = a, y = b, z = c;

        while ( x + y <= z) {
            if (x < b) x++;
            else if (y < c) y++;
        }

        cout << x << " " << y << " " << z << endl;

        t--;
    }

    return 0;
}