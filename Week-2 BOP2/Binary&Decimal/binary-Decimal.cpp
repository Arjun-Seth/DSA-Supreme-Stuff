#include <bits/stdc++.h>
using namespace std;

void binaryToDecimal(long long n)
{
    int sum = 0;
    int i = 0;
    while (n > 0)
    {
        int r = n % 10;
        sum += r * pow(2, i);
        i++;
        n /= 10;
    }
    cout << sum;
}

int main()
{
    long long n;
    cin >> n;
    binaryToDecimal(n);

    return 0;
}