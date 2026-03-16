#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T,N,X,Y;
    cin>>T;

    while(T--)
    {
        cin>>N>>X>>Y;
        int ans=1e9;

        for(int i=0;i<=(N+99)/100;i++)
        {
            int r=max(0,N-100*i);
            int a=(r+3)/4;
            ans=min(ans,i*X+a*Y);
        }

        cout<<ans<<"\n";
    }
}