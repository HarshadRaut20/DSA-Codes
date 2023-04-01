#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char> &s)
{

    int st = 0;
    int e = s.size() - 1;

    while (st < e)
    {
        swap(s[st++], s[e--]);
    }
}

int main()
{
}
