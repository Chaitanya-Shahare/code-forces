#include <iostream>

using namespace std;

void solve()
{
    int x;
    cin >> x;

    for (int i = 0; i < 2 * x; i++)
    {
        for (int j = 0; j < 2 * x; j++)
        {
            if ((i / 2) % 2 == 0)
            {
                if ((j / 2) % 2 == 0)
                {
                    cout << '#';
                }
                else
                {
                    cout << '.';
                }
            }
            else
            {
                if ((j / 2) % 2 == 0)
                {
                    cout << '.';
                }
                else
                {
                    cout << '#';
                }
            }
        }
        cout << endl;
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
