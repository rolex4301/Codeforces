#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    string inp;
    cin >> inp;

    unordered_map<char, int> charCount;

    for (int i=0; i < inp.length(); i++)
    {
        if (charCount.find(inp[i]) == charCount.end())
        {
            charCount[inp[i]] = 1;
        }
    }

    if (charCount.size() % 2 ==0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}