#include <iostream>

using namespace std;

int main()
{
    int a, b, temp;
    cin >> a;
    cin >> b;
    temp = 0;

    for (; a<=b; temp++)
    {
        a = a*3;
        b = b*2;
    }

    cout << temp;
}
