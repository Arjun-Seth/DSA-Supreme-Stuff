#include <bits/stdc++.h>
using namespace std;

int mountainPeak(int arr[], int size)
{
    int s = 0, e = size - 1, mid = s + (e - s) / 2;
    int ans = -1;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
            ans = e;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    // int arr[] = {0, 10, 5, 2};
    int arr[] = {1, 3, 5, 7, 15, 8, 4};
    int size = sizeof(arr) / 4;
    int value = mountainPeak(arr, size);
    cout << "The Mountain peak value of given array is : " << arr[value];

    return 0;
}