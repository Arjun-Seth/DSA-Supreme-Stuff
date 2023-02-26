#include <bits/stdc++.h>
using namespace std;

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
    int indexOfLastOcc = lastOccurrence(v, target);
    cout << "Last occurrence of " << target << " is at " << indexOfLastOcc << " index" << endl;

    return 0;
}