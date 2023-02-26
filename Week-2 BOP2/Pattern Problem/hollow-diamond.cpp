#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cin >> n;
    for (i; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i > 1)
        {

            for (int j = 1; j <= (2 * (i - 1) - 1); j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i < n)
        {
            for (int j = 1; j <= (2 * n - (2 * i + 1)); j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

//     *
//    * *
//   *   *
//  *     *
// *       *
// *       *
//  *     *
//   *   *
//    * *
//     *