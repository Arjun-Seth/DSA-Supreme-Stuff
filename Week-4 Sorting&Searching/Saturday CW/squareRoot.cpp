#include <bits/stdc++.h>
using namespace std;

int findSquareRoot(int n)
{
  int target = n, s = 0, e = n, mid = s + (e - s) / 2;
  int ans = -1;
  while (s <= e)
  {
    if (mid * mid == target)
    {
      ans = mid;
      return ans;
    }
    else if (mid * mid < target)
    {
      ans = mid;
      s = mid + 1;
    }
    else // (mid * mid > target)
    {
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}

int main()
{
  int n;
  cout << "Enter the number to find Square Root : ";
  cin >> n;
  int value = findSquareRoot(n);
  // cout << "Square root of " << n << " = " << value << endl;
  double precision;
  cout << "Enter the precision number in floating point: ";
  cin >> precision;
  double step = 0.1;
  double finalAns = value;
  for (int i = 0; i < precision; i++)
  {
    for (double j = finalAns; j * j <= n; j = j + step)
    {
      finalAns = j;
    }
    step = step / 10;
  }
  cout << finalAns;

  return 0;
}

// shivam kumar singh performance edition aur kuchh batao shivam bhai ky aselection hoga bhai 100000 mahina dega utna me ka hoga  bhai