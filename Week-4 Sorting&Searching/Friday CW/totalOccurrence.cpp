#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int> arr, int target)
{
    int s = 0, e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (target < arr[mid])
        {
            e = mid - 1;
        }
        else // (target > arr[mid])
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOccurrence(vector<int> arr, int target)
{
    int s = 0, e = arr.size(), mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (target == arr[mid])
        {
            ans = mid;
            s = mid + 1;
        }
        else if (target < arr[mid])
        {
            e = mid - 1;
        }
        else // (target > arr[mid])
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> v{1, 4, 4, 4, 4, 4, 6, 7};
    int target = 4;
    int indexOfFirstOcc = firstOccurrence(v, target);
    int indexOfLastOcc = lastOccurrence(v, target);
    int value = indexOfLastOcc - indexOfFirstOcc + 1;
    cout << "Total number of occurrence of " << target << " is " << value << endl;

    return 0;
}