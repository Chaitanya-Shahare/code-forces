#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;

    while (t > 0) {
        
        int a,b,c;
        cin >> a >> b >> c;

        vector<int> arr;
        arr.push_back(a);
        arr.push_back(b);
        arr.push_back(c);

        sort(arr.begin(), arr.end());

        int i = 5;

        while (i > 5) {
            arr[0]++;
            sort(arr.begin(), arr.end());
            i--;
        }
        int p = 1;
        for (i = 0 ; i < 3 ; i++) {
            p *= arr[i];
        }

        cout << p << "\n";

        

        t--;
    }

    return 0;
}