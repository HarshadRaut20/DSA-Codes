#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{

    int n = arr.size();
    vector<int> freq;
    sort(arr.begin(), arr.end());
    int i = 0;
    while (i < n)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        freq.push_back(count);
        i = i + count;
    }
    sort(freq.begin(), freq.end());
    for (int i = 1; i < freq.size(); i++)
    {
        if (freq[i - 1] == freq[i])
            return false;
    }
    return true;
}

int main()
{

    vector<int> arr = {1, 2, 2, 1, 1, 3};
}
