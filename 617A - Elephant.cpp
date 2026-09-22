#include <iostream>

using namespace std;

int main()
{
    int dist,hop;
    cin >> dist;

    hop = dist / 5;
    if (dist % 5 !=0)
    {
        hop++;
    }
    cout << hop;
}