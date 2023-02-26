#include <iostream>
using namespace std;

void checkPrime(int n)
{
    int j = 2;
    for (j; j <= n; j++)
    {

        int k = 0;
        for (int i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                k++;
                break;
            }
        }
        if (k == 0)
            cout << j << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    checkPrime(n);

    return 0;
}