#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{

    int i = 0;
    int n = s.length();
    string result;
    while (i < n)
    {
        /*i jab tak chalega jab tak koi space
            word encounter nhai kar leta */
        while (i < n && s[i] == ' ')
        {
            i++;
        }
        if (i >= n)
        {
            break;
        }

                int j = i;
        /* j aage padega tab tak koi space encounter
        nahi kar leta*/

        while (j < n && s[j] != ' ')
        {
            j++;
        }

        /*j-i isliye kiya kyu ki mujhe ek word ka
        substring chahiye*/
        string sub = s.substr(i, j - i);

        if (result.length() == 0)
        {
            result = sub;
        }
        else
        {
            result = sub + " " + result;
        }

        i = j + 1;
    }
    return result;
}

int main()
{
    // code
}
