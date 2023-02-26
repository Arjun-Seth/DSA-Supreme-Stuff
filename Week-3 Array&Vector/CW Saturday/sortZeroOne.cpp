#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{1, 0, 0, 1, 1, 0,1};
    int start = 0;
    int end = arr.size() - 1;
    while (start < end)
    {
        if (arr[start] == 1 && arr[end] == 0)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        else
        {
            start++;
            end--;
        }
    }
    for (auto value : arr)
    {
        cout << value << " ";
    }

    return 0;
}