#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void insertionSort(int n, vector<int> &arr)
{
    // Write your code here.

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];

        int j = i - 1;
        while (j >= 0)
        {
            // AGAR Chota hai toh shift kardo
            if (temp < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            // bada hai toh break
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    // code
}
