#include <bits/stdc++.h>
using namespace std;

int division(int dividend, int divisor)
{
    int s = 0, e = abs(dividend), mid = s + (e - s) / 2;
    int ans = 1;
    while (s <= e)
    {
        if (abs(divisor) * mid == abs(dividend))
        {
            ans = mid;
            break;
        }
        else if (abs(divisor) * mid < abs(dividend))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        { //(abs(divisor) * mid > abs(dividend))
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    // Handling negative cases
    if ((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0))
    {
        return ans;
    }
    else
    {
        return -1 * ans;
    }
}

int main()
{
    int dividend, divisor;
    cout << "Enter the dividend and divisor : ";
    cin >> dividend >> divisor;
    int value = division(dividend, divisor);
    cout << dividend << " / " << divisor << " = " << value;

    return 0;
}