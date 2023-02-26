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
            cout << " ";
        }
        if (i == 1 || i == n)
        {
            int k = 1;
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                if (j % 2 == 0)
                    cout << " ";
                else
                {
                    cout << k;
                    k++;
                }
            }
        }
        else
        {
            cout << 1;
            for (int j = 1; j <= (2 * (i - 1) - 1); j++)
            {
                cout << " ";
            }
            cout << i;
        }
        cout << endl;
    }
    return 0;
}

//     1
//    1 2
//   1   3
//  1     4
// 1 2 3 4 5