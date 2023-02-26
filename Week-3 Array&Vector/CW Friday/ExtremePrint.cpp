#include <iostream>
using namespace std;

void printExtremes(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int i = 0;
    while (start <= end)
    {
        if (start == end)
        {
            cout << arr[start];
            break;
        }
        else
        {
            cout << arr[start] << " ";
            start++;
            cout << arr[end] << " ";
            end--;
        }
    }
}

int main()
{
    int arr[] = {80, 20, 50, 40, 10, 60, 70};
    int size = sizeof(arr) / 4;
    printExtremes(arr, size);
    return 0;
}