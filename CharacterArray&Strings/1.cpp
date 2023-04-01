#include <iostream>
using namespace std;

int getCount(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    // code
    char name[20];
    cout << "Enter your name";
    cin >> name;

    cout << "The length of your name is " << getCount(name);
}
