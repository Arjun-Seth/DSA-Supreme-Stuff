#include <bits/stdc++.h>
using namespace std;

void sortColors(int arr[], int size)
{
    int min = 0, j = 0;
    int arr2[size];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
           
            arr2[j] = 0;
            j++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            
            arr2[j] = 1;
            j++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 2)
        {
            
            arr2[j] = 2;
            j++;
        }
    }
    for (auto value : arr2)
    {
        cout << value << " ";
    }
}

int main()
{
    int n = 5;
    int arr[n];
    cout << "Enter the colors index : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sortColors(arr, n);

    return 0;
}