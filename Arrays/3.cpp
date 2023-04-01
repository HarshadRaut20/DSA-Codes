#include <iostream>
using namespace std;

void LinearSearch(int arr[], int size, int n)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            cout << "The element is present at index " << i;
        }
        }
}

int main()
{
    // code
    int arr[6] = {1, 4, 6, 2, 7, 8};
    int n = 8;

    LinearSearch(arr, 6, 8);
}
