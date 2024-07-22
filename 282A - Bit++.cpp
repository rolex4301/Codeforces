#include<iostream>
using namespace std;
 
int main ()
{
    int n;
    int x = 0;
    cin >> n;
    for (int i = 0; i<n; i++)
    {
         string op;
         cin >> op;
         if (op == "++X" || op == "X++")
         {
             x++;
          }
          else 
          {
              x--;
              }
     }
     cout << x;       
}   
