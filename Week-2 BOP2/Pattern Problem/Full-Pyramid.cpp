#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            // for spaces
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            // for *
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    return 0;
}


//     *
//    * *
//   * * *
//  * * * *
// * * * * *

// When space removed from line 33

//     *
//    **
//   ***
//  ****
// *****