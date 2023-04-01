#include <iostream>
using namespace std;
#include <bits/stdc++.h>

bool vaild(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
char toLowwerCase(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        char temp;
        temp = (ch - 'A') + 'a';
        return temp;
    }
}

bool checkPalindrome(string s)
{
    string temp;
    for (int i = 0; i < s.length(); i++)
    {
        if (vaild(s[i]))
        {
            temp.push_back(s[i]);
        }
    }

    int st = 0;
    int e = temp.length() - 1;

    while (st < e)
    {
        if (toLowwerCase(temp[st]) != toLowwerCase(temp[e]))
        {
            return false;
        }
        else
        {
            st++;
            e--;
        }
    }
    return true;
}

int main()
{
    // code
}
