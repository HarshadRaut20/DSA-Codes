#include <iostream>
using namespace std;

void findUnique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << "The unique element is " << ans;
}
void printingArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {3, 7, 2, 2, 7};
    printingArray(arr, 5);
    cout << endl;
    findUnique(arr, 5);
}
