#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n - i + 1; j++)
            {
                cout << j << " "; //wrong statement
            }
        }
        else
        {
            for (int j = 1; j <= n - i + 1; j++)
            {
                if (j == n - i + 1)
                {
                    cout << "5"
                         << " ";
                }
                else if (j == 1)
                {
                    cout << i
                         << " ";
                }
                else
                {
                    cout << " "
                         << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}