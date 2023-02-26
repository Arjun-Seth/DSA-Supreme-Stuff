#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number to be search: ";
    cin >> n;
    int arr[] = {2, 9, 6, 7, 4, 12, 15};
    int flag = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == n)
        {
            flag++;
            break;
        }
    }
    if (flag == 1)
        cout << "Found";
    else
        cout << "Not found";
    return 0;
}