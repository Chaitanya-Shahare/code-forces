#include <iostream>

using namespace std;

int main() {
    int k,n,w;
    cin >> k >> n >> w;

    int required = k * (w*(w+1)/2);

    // cout << required - n >= 0 ? required - n : 0;
    if (required - n >= 0 ) {
        cout << required - n;
    } else {
        cout << 0;
    }

    return 0;
}