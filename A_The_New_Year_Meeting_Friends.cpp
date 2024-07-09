#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    vector<int> input;

    for (int i = 0 ; i < 3 ; i++ ) {
        int x;
        cin >> x;
        input.push_back(x);
    }


    sort(input.begin(), input.end());

    int b = input[1];

    for (int i = 0 ; i < 3 ; i++) {
        input[i] = abs(input[i] - b);
    }

    int ans = 0;

    for (int i = 0 ; i < 3 ; i++) {
        ans += input[i];
    }

    cout << ans;


    return 0;
}

// take the input in a vector input using pushback
// sort the input vector
// replace the elements with absolute difference of input[i] - input[1]
// ans is the sum of the input vector