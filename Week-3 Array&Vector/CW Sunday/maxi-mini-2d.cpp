#include <bits/stdc++.h>
using namespace std;

void findMaximumNumber(int arr[][3], int rows, int cols)
{
    int maxxi = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (maxxi < arr[i][j])
            {
                maxxi = arr[i][j];
            }
        }
    }
    cout << "Maximum number in 2D Array : " << maxxi << endl;
}

void findMinimumNumber(int arr[][3], int rows, int cols)
{
    int minni = INT_MAX;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (minni > arr[i][j])
            {
                minni = arr[i][j];
            }
        }
    }
    cout << "Minimum number in 2D Array : " << minni << endl;
}

int main()
{
    int rows = 3, cols = 3;
    int arr[3][3];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    findMaximumNumber(arr, rows, cols);
    findMinimumNumber(arr, rows, cols);

    return 0;
}