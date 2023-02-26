#include <bits/stdc++.h>
using namespace std;

int main()
{
    // length of string
    char name[100];
    cin >> name;
    int length = 0, i = 0;
    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    cout << "Length of name is " << length<<endl;


    return 0;
}