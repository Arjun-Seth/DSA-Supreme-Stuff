#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 8};
    int brr[] = {3, 4, 9, 10, 8};
    int sizeA = sizeof(arr) / 4;
    int sizeB = sizeof(brr) / 4;

    vector<int> ans;

    for (int i = 0; i < sizeA; i++)
    {
        for (int j = 0; j < sizeB; j++)
        {
            if (arr[i] == brr[j])
            {
                ans.push_back(brr[j]);
            }
        }
    }

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }

    for (auto value : ans)
    {
        cout << value << " ";
    }

    return 0;
}