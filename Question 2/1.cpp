#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr, int m)
{
    // Write your code here.

    int s = m + 1, e = arr.size() - 1;

    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{
    // code
}
