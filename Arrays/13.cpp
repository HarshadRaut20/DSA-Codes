#include <iostream>
using namespace std;

void sortO1(int arr[], int n)
{
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        if (arr[left] == 0)
        {
            left++;
        }
        else if (arr[right] == 1)
        {
            right--;
        }
        else
        {
            swap(arr[left], arr[right]);
        }
    }
}
void printingArrary(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};
    int n = 8;

    printingArrary(arr, n);

    sortO1(arr, n);

    printingArrary(arr, n);
}
