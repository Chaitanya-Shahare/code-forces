#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int getUniqueLength(string s) {
  sort(s.begin(), s.end());
  return string(s.begin(), unique(s.begin(), s.end())).size();
}

int main() {

  string y;
  cin >> y;

  int n = stoi(y);

  /* cout << getUniqueLength("2001"); */

  for (int i = 1; i < 9000 && n + 1 < 10000; i++) {
    n++;
    if (getUniqueLength(to_string(n)) == 4) {
      cout << n;
      return 0;
    }
  }

  return 0;
}

// 2013
//
// 0:16 - taking string input and taking length of unique elements
// 1:25 - how do I actually get the next unique characters number
// 2:05 - can run a loop till I get the unique characters years(start year-9000)
// 16:24- create function to check for the length of non repeated characters
// 26:55- getting wrong answer for 2000 to 2015 but the expected ans in 2013
