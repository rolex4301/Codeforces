#include<iostream>
using namespace std;
 
int main()
{
    unsigned long long n,m,a;
    cin >> n >> m >> a;
    unsigned long long ans = 0;
    if (n%a != 0)
    {
        n = n + a - (n%a);
    }
    if (m%a !=0)
    {
        m = m + a - (m%a);
    }
    n = n/a;
    m = m/a;
    ans = n*m;
    cout << ans;     
}