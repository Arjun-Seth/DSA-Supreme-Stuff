#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int k = i + 2;
        for (int j = 1; j <= i; j++)
        {
            cout << k;
        }
        cout << endl;
    }

    for (int i = n; i; i--)
    {
        int k = i + 1;
        for (int j = 1; j <= i - 1; j++)
        {
            cout << k;
        }
        cout << endl;
    }
    return 0;
}

// 3
// 44
// 555
// 6666
// 555
// 44
// 3