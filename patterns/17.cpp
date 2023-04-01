#include <iostream>
using namespace std;

int main()
{

    int n = 4;
    int i = 1;
    while (i <= n)
    {
        // spaces
        int spaces = i - 1;
        while (spaces)
        {
            cout << " ";
            spaces--;
        }

        // start
        int star = n - i + 1;
        while (star)
        {
            cout << "*";
            star--;
        }
        cout << endl;
        i++;
    }
}
