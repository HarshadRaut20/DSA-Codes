#include <iostream>
using namespace std;
#include <bits/stdc++.h>

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    // Write your code here.
    vector<int> ans;

    for (int i = 0; i < arr1.size(); i++)
    {
        int element = arr1[i];

        for (int j = 0; j < arr2.size(); j++)
        {
            if (element == arr2[j])
            {
                ans.push_back(arr1[i]);
                arr2[j] = -1;
                break;
            }
        }
    }
    return ans;
}

int main()
{
    // code
}
