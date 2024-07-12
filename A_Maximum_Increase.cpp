#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n < 2) {
        cout << n;
        return 0;
    }

    vector<int> input;
    for (int i = 0 ; i < n ; i++) {
        int x;
        cin >> x;
        input.push_back(x);
    }

    int curr = 1;
    int maxSize = 1;

    for ( int i = 1 ; i < n ; i++) {
        if (input[i] > input[i-1]) {
            curr++;
            maxSize = max(maxSize, curr);
        } else {
            curr = 1;
        }
    }

    cout << maxSize;

    return 0;


}

// take the input n
// initialize a vector then take it as input
// then start iterating thorugh the array using int i from i = 1
// if (input[i] > input[i+1]) {
// curr++;