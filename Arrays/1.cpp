#include <iostream>
using namespace std;

int getMin(int arr[], int n)
{
    int min = INT8_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= min)
            min = arr[i];
    }
    return min;
}

int getMax(int arr[], int n)
{
    int max = INT8_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= max)
            max = arr[i];
    }
    return max;
}

int main()
{
    int arr[5] = {
        6,
        8,
        1,
        2,
        3,
    };
    int min = getMin(arr, 5);
    int max = getMax(arr, 5);

    cout << "The min is " << min << endl;
    cout << "The max is " << max;
}
