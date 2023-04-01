#include <iostream>
using namespace std;

#include <bits/stdc++.h>
vector<vector<int>> findTriplets(vector<int> arr, int n, int a)
{
    // Write your code here.
    vector<vector<int>> ans;

    set<vector<int>> set;

    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {

                if (arr[i] + arr[j] + arr[k] == a)
                {

                    set.insert({arr[i], arr[j], arr[k]});
                }
            }
        }
    }

    for (auto it : set)
    {
        ans.push_back(it);
    }

    return ans;
}

int main()
{
    // code
}
