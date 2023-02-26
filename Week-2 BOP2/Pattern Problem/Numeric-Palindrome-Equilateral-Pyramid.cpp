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
            cout << " "
                 << " ";
        }
        int k = 0;
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
            k++;
        }
        for (int j = 1; j <= i - 1; j++)
        {
            k--;
            cout << k << " ";
        }
        cout << endl;
    }
}

//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1