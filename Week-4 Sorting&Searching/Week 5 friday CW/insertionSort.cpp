#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{10, 1, 7, 6, 14, 9};
    int n = v.size();

    for (int round = 1; round <n; round++)
    {
        // Fetching value i.e. 2nd element.
        int val = v[round];
        int j = round - 1;
        for (; j >= 0; j--)
        {
            // Compare the 2nd and 1st element.
            if (v[j] > val)
            {
                // Shift the larger element to right.
                v[j + 1] = v[j];
            }
            else
            {
                break;
            }
        }
        v[j + 1] = val;
    }

    for (auto value : v)
    {
        cout << value << " ";
    }

    return 0;
}
