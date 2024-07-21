#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    string cardOnTable;
    cin >> cardOnTable;
    vector<string> a;

    for (int i = 0 ; i < 5 ; i++) {
        string b;
        cin >> b;
        a.push_back(b);
    }

    for (int i = 0 ; i < 5 ; i++) {
        if (cardOnTable[0] == a[i][0]) {
            cout << "YES\n";
            return 0;
        }
    }

    for (int i = 0 ; i < 5 ; i++) {
        if (cardOnTable[1] == a[i][1]) {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";




    return 0;
}