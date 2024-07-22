#include <iostream>
using namespace std;
 
int main()
{
     string ip;
     cin >> ip;
     int val = ip[0];
     if ( val >= 97)
     {
         char r = val-32;
         cout << r;
         for (int i=1; i< ip.length(); i++)
          {
               cout<<ip[i];   
          }
      
      }
      else 
      {
           for (int i=0; i< ip.length(); i++)
      {
           cout<<ip[i];   
      }   
      }
      
}