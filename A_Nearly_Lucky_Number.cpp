#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    string yes = "YES", no = "NO";

    string input;
    cin >> input;
    vector<char> a;

    for (int i = 0 ; i < input.size() ; i++) {
        if (input[i] == '4' || input[i] == '7') a.push_back(input[i]);
    }

    int n = a.size();    

    if (n == 0) {
        cout << no;
        return 0;
    }

    while (n > 0) {
        if (n % 10 == 4 || n % 10 == 7) n /= 10;
        else break;
    }

    if (n == 0) {
        cout << yes;
    } else {
        cout << no;
    }


    return 0;
}

// take the input as a string
// run a loop though it & compare if "4" or "7"
// if yes push_back() to a vector a
// the size of this vector should be equal to lucky number

// how do we find the lucky number?
// run a loop and compare if each digit is 4 or 7
// 