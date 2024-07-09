#include <iostream>
#include <string>

using namespace std;

int main()
{

    string input;
    int countC = 0;

    cin >> input;

    int n = input.size();

    for (int i = 0; i < n; i++)
    {
        int a = (int)input[i];
        if (a < 91)
        {
            countC++;
        }
    }

    if (countC > n / 2)
    {
        for (int i = 0; i < n; i++)
        {
            if ((int)input[i] < 91)
                cout << input[i];
            else
                cout << (char)((int)input[i] - 32);
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if ((int)input[i] > 90)
                cout << input[i];
            else
                cout << (char)((int)input[i] + 32);
        }
    }

    return 0;
}

// 1. take the string as input
// 2. create a variable to count no. `countC` of capital letters
// 3. loop through the string char by char typecast it to int and update the countC
// 4. if countC is greater than half the length of input string then convert all to Upper case
// 5. loop through the string again by typcasting and maths change the lowercase
//      letter to capital
// 6. or vice versa

// character    ASCII value
// A            65
// a            97
// Z            90