#include <bits/stdc++.h>
using namespace std;

int findPivot(vector<int> arr)
{
    int s = 0, e = arr.size() - 1, mid = s + (e - s) / 2;
    int ans = -1;
    while (s < e)
    {
        if (arr[mid] > arr[mid + 1])
        {
            ans = mid;
            return ans;
        }
        if (arr[mid - 1] > arr[mid])
        {
            ans = mid - 1;
            return ans;
        }
        if (arr[s] > arr[mid])
        {
            e = mid;
        }
        else // (arr[s] < arr[mid])
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return e;
}

int binarySearch(vector<int> arr, int target, int s, int e)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            e = (mid - 1);
        }
        else // (target > arr[mid])
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    // vector<int> v{4, 5, 6, 0, 1, 2, 3};
    vector<int> v{3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 1, 2};
    int target = 6;
    int pivotIndex = findPivot(v);
    if (target >= v[0] && target <= v[pivotIndex])
    {
        // Search in array A
        int ans = binarySearch(v, target, 0, pivotIndex);
        cout << "Element found at index " << ans;
    }
    if (pivotIndex + 1 < v.size() && target >= v[pivotIndex + 1] && target <= v[v.size() - 1])
    {
        // Search in array A
        int ans = binarySearch(v, target, pivotIndex + 1, v.size() - 1);
        cout << "Element found at index " << ans;
    }

    return 0;
}