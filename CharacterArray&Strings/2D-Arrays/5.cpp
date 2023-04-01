#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    // transporse of the matrix
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {

        //  yaha pe hame sib diagonal tak jana hai agar Nth tak gai toh same matrix aayegi.
        for (int j = 0; j <= i; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}
int main()
{
    // code
}
