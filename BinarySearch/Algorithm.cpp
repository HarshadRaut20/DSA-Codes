#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right wala part
        if (key > arr[mid])
        {

            start = mid + 1;
        }
        // left wale part mei jana hai
        else
        {
            end = mid - 1;
        }

        mid = mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{
    int arr[6] = {3, 4, 54, 87, 90, 92};
    int n = 6;

    int index = binarySearch(arr, n, 87);
    cout << "The index of key is " << index;
}
