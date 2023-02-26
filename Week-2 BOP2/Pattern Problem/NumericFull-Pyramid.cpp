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
            cout << " "<< " ";
        }
        int k = i;
        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
            k++;
        }
        k--;
        for (int j = 1; j <= i - 1; j++)
        {
            k--;
            cout << k << " ";
        }
        cout << endl;
    }
}

//         1
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5