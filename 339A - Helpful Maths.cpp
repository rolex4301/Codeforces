#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
     string eq;
     cin >> eq;
     int size = eq.length();
     size = (size/2)+1;
     char a[size];
     for (int i=0; i<size; i++)
     {
          a[i] = eq[2*i];
     }
     sort(a,a+size);
     for (int j= 0; j<size; j++)
     {
         cout<<a[j];
         if (j !=size-1)
         {
              cout <<'+';   
         }
     }
     
}
