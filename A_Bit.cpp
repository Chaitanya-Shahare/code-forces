#include <iostream>
#include <string>

using namespace std;

int main()
{

    int n = 0, a = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string t;
        cin >> t;
        if (t[1] == '+') a++;
        else a--;
    }

    cout << a;

    return 0;
}