#include <iostream>
using namespace std;
int digitsOfInteger(long n)
{
    while (n > 0)
    {
        int r = n % 10;
        cout << r << " ";
        n /= 10;
    }
}

int main()
{

    long number;
    cin >> number;
    digitsOfInteger(number);
    return 0;
}