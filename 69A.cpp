#include <iostream>

using namespace std;

bool check(int *arr, int a, int n) {
  int sum = 0;
  for (int i = a; i < n * 3; i = i + 3) {
    sum += arr[i];
  }

  if (sum == 0)
    return true;
  return false;
}

int main() {

  int n;

  cin >> n;

  int *arr = new int[n * 3];

  for (int i = 0; i < n * 3; i++) {
    cin >> arr[i];
  }

  if (check(arr, 0, n) && check(arr, 1, n) && check(arr, 2, n)) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}
