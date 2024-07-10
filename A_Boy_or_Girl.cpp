#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    unordered_map<int,int> map;

    string input;

    cin >> input;
    int d = 0;

    for (int i = 0 ; i < input.size() ; i++) {
        if (!map[input[i]]) {
            d++;
            map[input[i]] = 1;
        } else {
            map[input[i]]++;
        }
    }

    if (d%2 != 0) {
        cout << "IGNORE HIM!";
    } else {
        cout << "CHAT WITH HER!";
    }


    return 0;
}