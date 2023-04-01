#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code
}
int compress(vector<char> &chars)
{
    int i = 0;
    int n = chars.size();
    int ansIndex = 0;

    while (i < n)
    {
        int j = i + 1;
        /*yeh loop se bhar kab aayenge 2 hi case mein
          1 - traversing complete hogai hogi
          2 - koi new character mil gaiya hoga*/

        while (j < n && chars[i] == chars[j])
        {
            j++;
        }

        // oldchar ko store kar denge
        chars[ansIndex++] = chars[i];
        int count = j - i;

        // agar count bada raha 1 se toh count ko store kar lenge
        if (count > 1)
        {
            string cnt = to_string(count);
            for (char ch : cnt)
            {
                chars[ansIndex++] = ch;
            }
        }
        // newchar pe jaiyega.
        i = j;
    }
    return ansIndex;
}