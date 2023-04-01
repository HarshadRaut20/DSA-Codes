#include <iostream>
using namespace std;

void printSumOfArray(int arr[], int size)
{

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "The sum of element in an array is " << sum;
}

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    printSumOfArray(arr, 5);
}
