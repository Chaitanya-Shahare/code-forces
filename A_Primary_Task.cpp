#include <iostream>
#include <string>

using namespace std;

void solve()
{
    string a;
    cin >> a;

    // The number must start with '10'
    if (a.length() >= 3 && a.substr(0, 2) == "10" && a[2] != '0' && !(a.size() == 3 && a[2] == '1'))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
