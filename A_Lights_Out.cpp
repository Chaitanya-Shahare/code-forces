#include <iostream>

using namespace std;

int getLight(int r, int c, int input[3][3]) {
  int sum = 0;

  if (c - 1 >= 0) {
    sum += input[r][c - 1];
  }

  sum += input[r][c];
  if (r - 1 >= 0)
    sum += input[r - 1][c];
  if (r + 1 < 3)
    sum += input[r + 1][c];

  if (c + 1 < 3) {
    sum += input[r][c + 1];
  }


  return sum % 2 == 1 ? 0 : 1;
}

int main() {

  int input[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> input[i][j];
    }
  }

  int lights[3][3];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      lights[i][j] = getLight(i, j, input);
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << lights[i][j];
    }
    cout << "\n";
  }

  return 0;
}

// 8:15 - figured out an approch to solve it
// 26:58 - came up with a brute force and repeating code solution on paper
// 