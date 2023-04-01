#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "enter a number";
    cin >> num;

    int i = 1;
    int a = 0;
    int b = 1;

    cout << " " << a;
    cout << " " << b;

    while (i <= num)
    {
        int c;
        c = a + b;
        cout << " " << c;
        a = b;
        b = c;

        i++;
    }
}
