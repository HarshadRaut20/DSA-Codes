#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkEqual(int a[26], int b[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

bool checkInclusion(string s1, string s2)
{
    // s1 ka count nikalenge
    int count1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        char ch = s1[i];
        int index = ch - 'a';
        count1[index]++;
    }

    int i = 0;
    int windowSize = s1.length();
    int count2[26] = {0};

    // s2 ka count nikalenge window ke form mei
    while (i < windowSize)
    {
        char ch = s2[i];
        int index = ch - 'a';
        count2[index]++;
    }

    // check if count is equal
    if (checkEqual(count1, count2))
        return true;

    // traverse karo next iteration mein in the form of window

    while (i < s2.length())
    {

        // new character
        char newCh = s2[i];
        int index = newCh - 'a';
        s2[index]++;

        // old character
        char oldCh = s2[i - windowSize];
        index = oldCh - 'a';
        s2[index]--;

        i++;

        if (checkEqual(count1, count2))
            return true;
    }
    return false;
}

int main()
{
    // code
}
