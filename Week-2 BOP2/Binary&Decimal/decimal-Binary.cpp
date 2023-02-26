#include <bits/stdc++.h>
using namespace std;

void decimalToBinary(int n)
{

    int sum = 0;
    int i = 0;
    while (n > 0)
    {
        int r = n % 2;
        sum += r * pow(10, i);
        i++;
        n /= 2;
    }
    cout << sum;
}

int main()
{

    int n;
    cin >> n;
    decimalToBinary(n);

    return 0;
}