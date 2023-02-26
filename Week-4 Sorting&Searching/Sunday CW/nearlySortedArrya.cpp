#include <bits/stdc++.h>
using namespace std;

int nearlySortedArray(vector<int> arr, int target)
{
    int s = 0, e = arr.size() - 1, mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (target == arr[mid])
        {
            ans = mid;
            return ans;
        }
        else if (target == arr[mid - 1])
        {
            ans = mid - 1;
            return ans;
        }
        else if (target == arr[mid + 1])
        {
            ans = mid + 1;
            return ans;
        }
        if (target < arr[mid])
        {
            e = mid - 2;
        }
        else if (target > arr[mid])
        {
            s = mid + 2;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> v{10, 3, 40, 20, 50, 80, 70};
    int target;
    cout << "Enter the target Element: ";
    cin >> target;
    int value = nearlySortedArray(v, target);
    cout << "Element found at " << value << " index";

    return 0;
}