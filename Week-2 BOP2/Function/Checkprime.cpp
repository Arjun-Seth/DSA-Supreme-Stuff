#include <iostream>
using namespace std;

void checkPrime(int n)
{
    int k = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            k++;
            break;
        }
    }
    if (k == 0)
        cout << "Prime";
    else
        cout << "Not Prime";
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    checkPrime(n);

    return 0;
}