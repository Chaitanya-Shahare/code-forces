#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to calculate the typing time for a given string
int calculate_typing_time(const string &s)
{
    int time = 2; // Time to type the first character
    for (int i = 1; i < s.size(); ++i)
    {
        if (s[i] == s[i - 1])
        {
            time += 1;
        }
        else
        {
            time += 2;
        }
    }
    return time;
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string best_password;
        int max_time = -1;

        // Try inserting each letter at each position
        for (int i = 0; i <= s.size(); ++i)
        {
            for (char c = 'a'; c <= 'z'; ++c)
            {
                string new_password = s.substr(0, i) + c + s.substr(i);
                int typing_time = calculate_typing_time(new_password);
                if (typing_time > max_time)
                {
                    max_time = typing_time;
                    best_password = new_password;
                }
            }
        }

        cout << best_password << endl;
    }
}

int main()
{
    solve();
    return 0;
}
