#include <iostream>
using namespace std;

int largestSumOfRow(int arr[][3], int row, int col)
{

    int maxi = INT16_MIN;
    int ansIndex = -1;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            ansIndex = row;
        }
    }
    cout << "The largest sum is " << maxi << " is at index ";
    return ansIndex;
}

int main()
{
    int row = 3;
    int col = 3;
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << largestSumOfRow(arr, row, col);
}
