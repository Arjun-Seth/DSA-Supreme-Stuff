#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
            if (j != i)
                cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i ; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
            if (j != i)
                cout << "*";
        }
        cout << endl;
    }
    return 0;
}


// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 4*4*4*4
// 3*3*3
// 2*2
// 1