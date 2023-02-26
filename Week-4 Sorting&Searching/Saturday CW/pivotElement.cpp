#include <bits/stdc++.h>
using namespace std;

int findPivot(vector<int> arr)
{
    int s = 0, e = arr.size() - 1, mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
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
            e = mid - 1;
        }
        else // (arr[s] < arr[mid])
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> v{3, 4, 5, 6, 7, 1, 2};
    int value = findPivot(v);
    cout << "Pivot element is : " << value;

    return 0;
}