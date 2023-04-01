#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int i = 1;
    while (i <= n)
    {
        // 1st triangle spaces wala
        int spaces = n - i;
        while (spaces)
        {
            cout << " ";
            spaces--;
        }
        // 2nd triangle
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }

        // 3rd triangle
        int k = i - 1;
        while (k)
        {
            cout << k;
            k--;
        }

        cout << endl;
        i++;
    }
}
