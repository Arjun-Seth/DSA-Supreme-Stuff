#include <bits/stdc++.h>
using namespace std;

void rowWiseSum(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << "col " << i << " Sum: " << sum << endl;
    }
}

int main()
{
    int row = 3, col = 3;
    int arr[3][3];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    rowWiseSum(arr, row, col);

    return 0;
}