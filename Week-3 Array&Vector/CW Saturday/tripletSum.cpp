#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a{1, 3, 5, 7, 2, 4, 6};
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            for (int k = j + 1; k < a.size(); k++)
            {
                if (a[i] + a[j] + a[k] == 9)
                    cout << "(" << a[i] << "," << a[j] << "," << a[k] << ")"
                         << " ";
            }
        }
    }

    return 0;
}