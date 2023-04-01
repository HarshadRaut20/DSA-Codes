#include <iostream>
using namespace std;

int main()
{

    int number;
    cout << "Enter the number you want to check" << endl;
    cin >> number;

    int i = 2;
    while (i < number)
    {
        if (number % i == 0)
        {
            printf("The number is not a prime number");
            break;
        }
        else
        {
            printf("The number is a prime number");
            break;
        }
        i++;
    }
}