#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{

    int t, x;
    cin >> t;

    while (t > 0)
    {

        cin >> x;
        int y = x;
        vector<int> ans;
        int p = 1;
        while (true)
        {

            int z = y % (int)pow(10, p); // 9876 % 10 = 6
            p++;
            if (z != 0){
                ans.push_back(z);
                if (z == y) break;
            }
            y -= z; // y = 9870
        }
        int n = ans.size();
        cout << n << "\n";
        for (int i = 0 ; i < n ; i++) {
            cout << ans[i] << " ";
        } 
        cout << "\n";

        t--;
    }

    return 0;
}

// take t as no. of test cases
// x is the number that we are going to process
// we may need recursion for this or a cleverr loop
// let's take the case of 5009
// initialize a vector ans of type int
// 5009 % 10 = 9; 5009 - 5009 % 10 = 5000
// 5000 % 100 = 0;
// 5000 % 1000 = 0;

// x = 9876
// y = 9876
// ans = [6, 70, 800, 9000];
// z = y % 10; // 9876 % 10 = 6
// if (z != 0) ans.push_back(z);
// y -= z      // y = 9870
// z = y % 100;// 9870 % 100 = 70
// if (z != 0) ans.push_back(z);
// y -= z      // y = 9800
// z = y % 1000;// 9800 % 1000 = 800
// if (z != 0) ans.push_back(z);
// y -= z      // y = 9000
// z = y % 10000;// 9000 % 10000 = 9000
// if (z == y || z != 0) ans.push_back(z);
//