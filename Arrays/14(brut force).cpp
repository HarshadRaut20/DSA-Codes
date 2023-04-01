#include <iostream>
#include <algorithm>
using namespace std;

void sort012(int *arr, int n)
{
    //   Write your code here
    int zero = count(arr, arr + n, 0);
    int one = count(arr, arr + n, 1);
    int two = n - zero - one;

    int j = 0;
    for (int i = 0; i < zero; i++)
    {
        arr[j] = 0;
        j++;
    }
    for (int i = 0; i < one; i++)
    {
        arr[j] = 1;
        j++;
    }

    for (int i = 0; i < two; i++)
    {
        arr[j] = 2;
        j++;
    }
}

int main()
{
    // code
}
