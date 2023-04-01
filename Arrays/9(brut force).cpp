#include <iostream>
#include <vector>
using namespace std;

vector<int> findDuplicates(vector<int> &nums)
{

    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        int count = 1;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
                if (count >= 2)
                {
                    ans.push_back(nums[j]);
                }
            }
        }
    }

    return ans;
}

int main()
{
    // code
}
