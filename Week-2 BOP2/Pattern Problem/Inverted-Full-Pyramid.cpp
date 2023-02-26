#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // for spaces
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        // for *
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*"<<" ";
                }
        cout << endl;
    }
    return 0;
}

// * * * * *
//  * * * *
//   * * *
//    * *
//     *

// When space removed from line 18

// *****
//  ****
//   ***
//    **
//     *