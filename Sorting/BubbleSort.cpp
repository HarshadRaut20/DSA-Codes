#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void bubbleSort(vector<int> &arr, int n)
{
    // Write your code here.
    // for round 1 to n-1
    for (int i = 1; i < n; i++)
    {
        // process the element till n-i th index
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    // code
}
