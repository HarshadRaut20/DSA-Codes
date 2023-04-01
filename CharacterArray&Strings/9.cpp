#include <iostream>
using namespace std;

string removeDuplicates(string s)
{

    int i = 0;
    int j = 1;
    while (j < s.length())
    {
        if (s[i] == s[j])
        {
            s.erase(s.begin() + i);
            s.erase(s.begin() + i);
            i = 0;
            j = 1;
        }
        else
        {
            i++;
            j++;
        }
    }
    return s;
}

int main()
{
    // code
}
