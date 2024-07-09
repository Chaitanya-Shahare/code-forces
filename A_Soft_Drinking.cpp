#include <iostream>

using namespace std;

int main() {

    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalDrink = k*l;
    int totalSlices = c*d;
    int totalSalt = p;

    int drinkFor1Toast = nl*n;
    int slicesFor1Toast = n;
    int saltFor1Toast = np*n;

    int byDrink = totalDrink / drinkFor1Toast;
    int bySlices = totalSlices / slicesFor1Toast;
    int bySalt = totalSalt / saltFor1Toast;

    int totalToasts = min(min(byDrink, bySlices), bySalt);

    cout << totalToasts;
    
    return 0;
}

// Given:
// n = no. of friends
// k = no. of bottles
// l = milliliters of drink / bottle
// c = total no. limes
// d = no. of slices / lime
// p = total salt in grams
// 
// For 1 toast, each one should have
// nl = milliters of drink
// 1 slice of lime
// np = grams of salt

// To find:
// - Total no. of toast posible
// - Total no. of toast made by one friend