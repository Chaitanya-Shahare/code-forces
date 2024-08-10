#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        string x;
        cin >> x;

        int first_one = -1;
        int last_one = -1;

        // Find the position of the first and last '1' in the string
        for (int i = 0; i < x.size(); i++) {
            if (x[i] == '1') {
                if (first_one == -1) {
                    first_one = i;
                }
                last_one = i;
            }
        }

        int count = 0;
        if (first_one != -1) {
            // Count the number of '0's between the first and last '1'
            for (int i = first_one; i <= last_one; i++) {
                if (x[i] == '0') {
                    count++;
                }
            }
        }

        cout << count << endl;
        t--;
    }

    return 0;
}
