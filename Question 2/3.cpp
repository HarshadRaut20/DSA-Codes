#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &arr)
{

    // zero is pointing toward the zero element in arr
    int zero = 0;

    // J is pointing towards the nonZero element in arr
    for (int j = 0; j < arr.size(); j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[zero]);
            zero++;
        }
    }
}
int main()
{
    // code
}
