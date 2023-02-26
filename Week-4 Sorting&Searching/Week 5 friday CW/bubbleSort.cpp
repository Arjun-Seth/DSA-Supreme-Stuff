#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{10, 1, 7, 6, 14, 9};
    int n = v.size();
    for (int round = 1; round < n; round++)
    {
        int count = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                count++;
            }
        }
        if (count == 0)
            break;
    }

    for (auto value : v)
    {
        cout << value << " ";
    }

    return 0;
}