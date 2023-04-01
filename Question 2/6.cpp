#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    // Write your code here.

    int carry = 0;
    int i = n - 1;
    int j = m - 1;
    vector<int> ans;

    while (i >= 0 && j >= 0)
    {
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);

        i--;
        j--;
    }
    // First case
    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    // second case
    while (j >= 0)
    {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    // third case
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    // code
}
