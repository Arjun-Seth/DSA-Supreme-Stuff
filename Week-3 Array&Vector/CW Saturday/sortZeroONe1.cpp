#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{1, 0, 0, 1, 1, 0,1};
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            ans.push_back(arr[i]);
        }
    }

    int n = arr.size() - ans.size();
    for (int i = 0; i < n; i++)
    {

        ans.push_back(1);
    }

    for (auto value : ans)
    {
        cout << value << " ";
    }

    return 0;
}