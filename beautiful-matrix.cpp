#include <iostream>

using namespace std;

int main() {

  /* int arr[5][5] = {{0}}; */

  int a,x,y;

  for (int i = 0 ; i < 5 ; i++) {
    for ( int j = 0 ; j < 5 ; j++ ) {
      cin >> a;

      if (a == 1) {
        x = i;
        y = j;
      }
    }
  }

  cout << abs(x - 2) + abs(y - 2);


  return 0;
}
