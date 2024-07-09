#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;

    cin>> input;

    if ((int)input[0] > 90) input[0] = (char)((int)input[0] - 32);

    cout << input;


    return 0;
}

