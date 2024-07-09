#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {

    int n, x;
    cin >> n;
    // int input[101] = {0};
    unordered_map<int,int> a;
    for (int i = 1 ; i <= n ; i++) {
        cin >> x;
        a[x] = i;
    }

    // int output[101] = {0};

    for (int i = 1 ; i <= n ; i++) {
        cout << a[i] << " ";
    }


    return 0;
}