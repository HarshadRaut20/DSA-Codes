#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int i = 1;

    while (i <= n)
    {
        // 1st triangle
        int k = 1;
        int num1 = n - i + 1;
        while (k <= num1)
        {
            cout << k;
            k++;
        }

        // 2nd triangle  star
        int star = 2 * i - 2;
        while (star)
        {
            cout << "*";
            star--;
        }

        // 3rd triangle
        int start = n - i + 1;
        while (start)
        {
            cout << start;
            start--;
        }

        cout << endl;
        i++;
    }
}
