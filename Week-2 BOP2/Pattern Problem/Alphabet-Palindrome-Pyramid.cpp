#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int j;
        for (j = 1; j <= i; j++)
        {
            char ch = 'A' + j - 1;
            cout << ch << " ";
        }
        j--;
        j--;
        for (j; j; j--)
        {
            char ch = 'A' + j - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
}


// A
// A B A
// A B C B A
// A B C D C B A