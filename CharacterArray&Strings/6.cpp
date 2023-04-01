#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char maxOccCharacter(string s)
{

    string temp = {0};

    // puting the value inside string
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number;
        // lowerCase
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
            temp[number]++;
        }
        // upperCase

        else
        {
            number = ch - 'A';
            temp[number]++;
        }
    }

    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi <= temp[i])
        {
            ans = maxi;
            maxi = temp[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
}

int main()
{
    // code
}
