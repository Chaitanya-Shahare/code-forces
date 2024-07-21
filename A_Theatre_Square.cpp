#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;

    // Calculate the number of flagstones required for each dimension
    long long numFlagstonesN = (n + a - 1) / a;
    long long numFlagstonesM = (m + a - 1) / a;

    // Calculate the total number of flagstones
    long long totalFlagstones = numFlagstonesN * numFlagstonesM;

    cout << totalFlagstones << endl;

    return 0;
}
