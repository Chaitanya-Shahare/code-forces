#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;

    int maxScore = 0;
    int minScore = 0;
    cin >> maxScore;
    minScore = maxScore;
    t--;
    int ans = 0;
    while (t > 0)
    {
        int x;
        cin >> x;
        if (x > maxScore)
        {
            ans++;
            maxScore = x;
        }
        else if (x < minScore)
        {
            ans++;
            minScore = x;
        }
        t--;
    }

    cout << ans;

    return 0;
}