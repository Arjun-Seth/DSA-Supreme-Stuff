#include <iostream>
#include <limits.h>
using namespace std;

int findMinNum(int arr[], int size)
{
    int minni = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minni)
        {
            minni = arr[i];
        }
    }
    return minni;
}

int main()
{
    int arr[] = {2, 9, 6, 7, 4, 1, 12, 15};
    int size = sizeof(arr) / 4;
    int minNumber = findMinNum(arr, size);
    cout << "Minimum Number : " << minNumber;
    return 0;
}
