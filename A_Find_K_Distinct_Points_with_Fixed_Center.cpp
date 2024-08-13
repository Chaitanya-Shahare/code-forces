#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int xc, yc, k;
    cin >> xc >> yc >> k;

    for (int i = 0; i < k; ++i)
    {
        cout << xc + i << " " << yc + i << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
