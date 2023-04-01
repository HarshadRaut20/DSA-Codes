#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &arr, int k, int mid)
{
    int painterCount = 1;
    int time = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (time + arr[i] <= mid)
        {
            time += arr[i];
        }
        else
        {
            painterCount++;
            if (painterCount > k || arr[i] > mid)
            {
                return false;
            }
            else
            {
                time = arr[i];
            }
        }
    }

    return true;
}

int findLargestMinDistance(vector<int> &arr, int k)
{
    //    Write your code here.

    int s = 0;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (isPossible(arr, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    // code
}
