#include <iostream>
using namespace std;

int firstOccurrance(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid]) // right mei jao
        {
            start = mid + 1;
        }
        else if (key < arr[mid]) // left mei jao
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastOccurance(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;

    int ans = -1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid]) // right mei jao
        {
            start = mid + 1;
        }
        else if (key < arr[mid]) // left mei jao
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[5] = {1, 2, 3, 3, 1};
    int n = 5;

    int firstOcc = firstOccurrance(arr, 5, 3);
    int lastOcc = lastOccurance(arr, 5, 3);
    int totalOcc = (lastOcc - firstOcc) + 1;

    cout << "The total number of occurance is " << totalOcc;
}
