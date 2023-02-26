#include <bits/stdc++.h>
using namespace std;

int chLength(char ch[])
{
    int length = 0, i = 0;
    while (ch[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

bool checkPalindrome(char ch[], int length)
{
    int s = 0, e = length - 1;
    while (s <= e)
    {
        if (ch[s] != ch[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main()
{
    char ch[100];
    cin >> ch;
    int length = chLength(ch);
    bool palindrome = checkPalindrome(ch, length);
    cout << length << endl
         << palindrome << endl;
    return 0;
}