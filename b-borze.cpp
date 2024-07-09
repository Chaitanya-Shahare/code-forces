#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  // ---..
  // 210
  // .  => 0
  // -. => 1
  // -- => 0

  string s;
  cin >> s;

  bool f = false;

  vector<int> ans;

  for (int i = 0 ; i < s.size() ; i++) {
    if (s[i] == '.' && !f) {
      ans.push_back(0);
    } else if (s[i] == '.' && f) {
      ans.push_back(1);
      f = false;
    } else if (s[i] == '-' && f) {
      ans.push_back(2);
      f = false;
    } else if (s[i] == '-' && !f) {
      f = true;
    }
  }

  for (int i = 0 ; i< ans.size() ; i++) {
    cout << ans[i];
  }

  return 0;

}
