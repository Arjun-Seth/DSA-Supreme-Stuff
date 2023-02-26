#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int s = 0, e = size - 1, mid = s + (e - s) / 2;
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

    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int size = 7;
    int target = 12;
    int searchElement = binarySearch(arr, size, target);
    if (searchElement == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found at " << searchElement << " index" << endl;
    }

    return 0;
}