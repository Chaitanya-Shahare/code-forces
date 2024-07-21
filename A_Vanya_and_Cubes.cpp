#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 1;
    int curr = 0;
    int cum = 0;

    while (true) {
        if(cum > n) {
            cout << a-2 << endl;
            return 0;
        }        

        curr += a++;
        cum += curr;
    }

    return 0;
}

// 1. Take n as input (total no. of cubes)
// 2. For a levels we need a*(a+1)/2
// 3. a*(a+1)/2 need to be maximized but should be less than n