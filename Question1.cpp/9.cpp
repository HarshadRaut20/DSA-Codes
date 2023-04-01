#include <iostream>
using namespace std;

int fibonaci(int n)
{
    int a = 0;
    int b = 1;

    int c;
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main()
{

    int n;
    cin >> n;

    int ans = fibonaci(n);
    cout << ans;
}
