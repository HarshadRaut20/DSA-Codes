#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> findDuplicates(vector<int> &nums)
{

    sort(nums.begin(), nums.end());

    int j = nums[0];
    vector<int> ans;

    for (int i = 1; i < nums.size(); i++)
    {
        if (!(j ^ nums[i]))
        {
            ans.push_back(nums[i]);
        }
        else
        {
            j = nums[i];
        }
    }
    return ans;
}

int main()
{
    // code
}
