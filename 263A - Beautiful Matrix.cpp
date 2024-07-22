#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{    
     int start, end, ans;
     int a[5][5];
     for (int i=0; i<5; i++)
     {
              cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3] >> a[i][4];  
     }
     for (int i=0; i<5; i++)
     {
          for (int j=0; j<5; j++)
          {
                  if (a[i][j]==1)
                  {
                       start = i+1;
                       end = j+1;   
                  }
          }   
     }
     ans = abs(start-3) + abs(end-3);
     cout << ans;
}