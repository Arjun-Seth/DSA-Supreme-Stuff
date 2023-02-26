#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << j << " ";
            }
        }
        for(int j=1; j<=1; j++){
            cout<<i;
        }
    }

    return 0;
}