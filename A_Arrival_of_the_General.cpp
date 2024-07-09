#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, x;
    cin >> n;

    if (n < 2) {
        cout << 0;
        return 0;
    }

    vector<int> input;
    for (int i = 0 ; i < n ; i++ ) {
        cin >> x;
        input.push_back(x);
    }


    int ans = 0;

    int minH = INT_MAX;
    int maxH = INT_MIN;
    int minI = -1, maxI = -1;

    // TODO: handle case for latest min and earliest max
    for ( int i = 0 ; i < n ; i++) {
        if (input[i] <= minH) {
            minH = input[i];
            minI = i;
        }
        if (input[i] > maxH) {
            maxH = input[i];
            maxI = i;
        }
    }

    // minI = 1
    // maxI = 6

    if (minI <= maxI) {
        int s1 = n - minI;  // 6
        int s2 = maxI;      // 6
        ans = abs(s2 + s1) - 2;
    } else {
        int s1 = n - minI; 
        int s2 = maxI;
        ans = abs(s2 + s1)- 1;
    }

    cout << ans;
    

    return 0;
}

// 7
// 10 10 58 31 63 40 76
// 0  1  2  3  4  5  6
// latest min no index = 1
// swaps to get to end = n - latest-min-no-index // 7 - 1 = 6
// earliest max no index = 6
// swaps to get to start = 6
// ans = swaps to get to end + swaps to get to start - 2;

// 4
// 33 44 11 22
// 0  1  2  3
// latest min no index = 2
// swaps to get to end = n - 2 = 3 - 2 = 1
// earliest max no index = 1
// swaps to get to start = 1
// ans = 1 + 1 = 2