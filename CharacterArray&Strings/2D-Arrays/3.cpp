#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    // Write your code here
    vector<int> ans;

    for (int col = 0; col < mCols; col++)
    {

        // odd case - bottom to top
        if (col & 1)
        {
            for (int row = nRows - 1; row >= 0; row--)
            {
                ans.push_back(arr[row][col]);
            }
        } // even case - top to bottom
        else
        {
            for (int row = 0; row < nRows; row++)
            {
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}

int main()
{
    // code
}
