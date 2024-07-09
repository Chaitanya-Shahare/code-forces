#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n;

    int sum = 0;
    vector<int> p;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        sum = sum - a + b;
        p.push_back(sum);
    }

    int m = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        m = max(m, p[i]);
    }

    cout << m;

    return 0;
}