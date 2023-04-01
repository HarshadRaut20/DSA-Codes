#include <iostream>
using namespace std;

bool isEvenOrOdd(int n)
{
    // odd
    if (n & 1)
    {
        return 1;
    }
    // even
    return 0;
}

int main()
{
    int n;
    cin >> n;

    int ans = isEvenOrOdd(n);
    if (ans == 1)
    {
        cout << "The number is odd";
    }
    else
    {
        cout << "The number is even";
    }
}
