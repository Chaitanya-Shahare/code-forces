#include <iostream>

using namespace std;

int main()
{

    int r, c;
    cin >> r >> c;
    bool isRight = true;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i % 2 == 0)
            {
                cout << '#';
            }
            else
            {
                if (isRight && j == c - 1)
                {
                    cout << '#';
                }
                else if (!isRight && j == 0)
                {
                    cout << '#';
                }
                else
                {
                    cout << '.';
                }
            }
        }
        if (i %2 == 1) isRight = !isRight;
        cout << "\n";
    }

    return 0;
}