#include <iostream>
using namespace std;

void reverseAnArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printingArrary(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printingArrary(arr, 5);
    cout << endl;
    reverseAnArray(arr, 5);
    printingArrary(arr, 5);
}
