#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        stack<int> st;
        int cost = 0;

        for (int i = 1; i < n; i += 2) {
            if (s[i] == '(') {
                st.push(i);
            } else if (s[i] == ')') {
                if (!st.empty()) {
                    int openPos = st.top();
                    st.pop();
                    cost += (i - openPos);
                }
            }
        }

        cout << cost << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
