#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int i = 1;

    while (i <= n)
    {
        int spaces = n - i;
        while (spaces)
        {
            cout << " ";
            spaces--;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}
