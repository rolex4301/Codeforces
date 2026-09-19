#include <iostream>
#include <cmath>
#include<string>
using namespace std;

int main()
{
    string str1, str2;
    int count = 0;
    cin >> str1;
    cin >> str2;

    for (int i = 0; i < str1.length(); i++)
    {
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
    }


    for (int i = 0; i < str2.length(); i++)
    {
        if (str1[i] < str2[i])
        {
            count = -1;
            break;
        }
        else if (str1[i] > str2[i])
        {
            count = 1;
            break;
        }
    }

    cout << count;

}