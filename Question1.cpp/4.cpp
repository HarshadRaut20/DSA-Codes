#include <iostream>
using namespace std;

int main()
{
    int num = 0101; // 5;
    int count = 0;

    while (num != 0)
    {
        // Checking if bit is 1 OR Not
        if (num & 1)
        {
            count++;
        }
        num = num >> 1;
    }
    cout << count;
}
