#include <iostream>
#include <limits.h>
using namespace std;

int findMaxNum(int arr[], int size)
{
    int maxxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxxi)
        {
            maxxi = arr[i];
        }
    }
    return maxxi;
}

int main()
{
    int arr[] = {2, 9, 6, 7, 4, 12, 15};
    int size = sizeof(arr) / 4;
    int maxNumber = findMaxNum(arr, size);
    cout << "Maximum Number : " << maxNumber;
    return 0;
}
