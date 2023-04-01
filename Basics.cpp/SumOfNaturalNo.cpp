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
        sum = sum + i;
        i++;
    }

    cout << "The sum of natural number is " << sum << endl;
}
