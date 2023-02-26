#include <bits/stdc++.h>
using namespace std;

void replaceSpaces(char sentence[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (sentence[i] == ' ')
        {
            sentence[i] = '@';
        }
    }
    cout << endl;
    cout << sentence;
}

void palindrome(char name[], char name2[])
{
    if (name == name2)
    {
        cout <<"same";
    }
}

int main()
{
    // length of string
    char name[100];
    // cin >> name;
    cin.getline(name, 100);
    char name2[10];
    strcpy(name, name2);
    int length = 0, i = 0;
    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    // cout << "Length of name is " << length<<endl;
    for (int i = length; i >= 0; i--)
    {
        cout << name[i];
    }
    // replaceSpaces(name, length);
    palindrome(name, name2);
    return 0;
}