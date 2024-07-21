#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string removeDigit(string number, char digit)
{
    // "1231" '1'
    // ans = ["231", "123"]
    // curr = "123"
    // m = "231"
    // i = 1
    vector<string> ans;

    string curr = "";

    for (int i = 0; i < number.size(); i++)
    {
        if (number[i] == digit)
        {
            curr = "";
            for (int j = 0; j < number.size(); j++)
            {
                if (j != i)
                {
                    curr.push_back(number[j]);
                }
            }
            ans.push_back(curr);
        }
    }

    string m = ans[0];

    for (int i = 0; i < ans.size(); i++)
    {
        if (stoi(ans[i]) > stoi(m))
        {
            m = ans[i];
        }
    }

    return m;
}

int main()
{

    string number = ""
    string ans = removeDigit()


    return 0;
}