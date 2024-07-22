# include <iostream>
using namespace std;
 
int main()
{
    int num;
    cin>>num;
    int ans =0;
    for(int i =0; i<num; i++)
    {
        int c1,c2,c3;
        cin>>c1>>c2>>c3;
        int val = c1*100 + c2*10 + c3;
        if (val == 101 || val == 110 || val== 11 || val ==111)
        {
            ans++;
            }
        }
        cout<<ans;
        return 0;
}
