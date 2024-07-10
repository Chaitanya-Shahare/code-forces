#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string input;

    cin >> input;

    stringstream ss(input);

    // Tokenize the input string by comma delimiter
    string token;
    vector<int> tokens;
    char delimiter = '+';

    while (getline(ss, token, delimiter))
    {
        tokens.push_back(stoi(token));
    }

    sort(tokens.begin(), tokens.end());

    for (int i = 0 ; i < tokens.size() ; i++) {
        if (i!=0) cout << '+';
        cout << tokens[i];
    }

    return 0;
}