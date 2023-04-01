#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool valid(char ch)
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
char toLowerCase(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        char temp;
        temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string temp)
{
    int st = 0;
    int e = temp.length() - 1;

    while (st <= e)
    {
        if ((temp[st]) != (temp[e]))
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

bool isPalindrome(string s)
{
    string temp = "";
    // faltu character remove kardiye
    for (int i = 0; i < s.length(); i++)
    {
        if (valid(s[i]))
        {
            temp.push_back(s[i]);
        }
    }

    // lower case mei kardo
    for (int i = 0; i < temp.length(); i++)
    {
        temp[i] = toLowerCase(temp[i]);
    }

    // check karenge ki palindrome hai ki nahi
    return checkPalindrome(temp);
}

int main()
{
    // code
}
