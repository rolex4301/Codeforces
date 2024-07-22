#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
     int m,n;
     cin >> m >> n;
     int maxi, bis;
     if(n>m)
     {
         maxi = m;
         m = n;
         n= maxi;    
     }
     bis = (floor(m/2))*n;
     if (m%2==1)
     {
          bis = bis + floor(n/2);   
     }
     cout << bis;
}