#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number" << endl;
    cin >> number;

    int sum = 0;
    int i = 1;
    while (i <= number)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
            i++;
        }
        else
        {
            i++;
        }
    }

    cout << "The sum of even number is " << sum;
}
