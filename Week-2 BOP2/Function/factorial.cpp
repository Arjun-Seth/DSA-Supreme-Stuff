#include <iostream>
using namespace std;

int findFactorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int factorial = findFactorial(n);
    cout << factorial;

    return 0;
}