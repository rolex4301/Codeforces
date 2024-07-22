#include <iostream>
using namespace std;
 
int main()
{
     int par, cut;
     cin >> par >> cut;
     
     int a[par];
     for (int i=0; i<par; i++)
     {
         cin >> a[i];    
     }
     int cutoff = a[cut-1];
     int pass = 0;
     for (int i = 0; i<par; i++)
     {
          if (a[i]>0 && a[i]>= cutoff)
          {
              pass++;    
          }           
     }
     cout << pass;
}
