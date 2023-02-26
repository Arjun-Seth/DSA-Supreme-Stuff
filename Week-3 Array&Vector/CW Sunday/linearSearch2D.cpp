#include <bits/stdc++.h>
using namespace std;

bool findElement(int arr[][3], int rows, int cols, int k)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == k)
            {
                return true;
            }
        }
    }
    return false;
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
    int k = 4;
    cout << findElement(arr, rows, cols, k);
    // if (findElement(arr, rows, cols, k))
    // {
    //     cout << "True";
    // }
    // else
    // {
    //     cout << "False";
    // }

    return 0;
}