#include<bits/stdc++.h>
using namespace std;
int i,k,m,n,t;
string s;
void asad(){
    int t;
    cout<<"int n; char s[109];";
    scanf("%d", &t);

}
int main()
{
    for(cin>>t;t--;)
    {
        cin>>n>>s;
        for(i=k=m=0;i<n;i++)
        {
            if(s[i]&1)m=min(m,--k);
            else k++;
        }
        cout<<-m<<endl;
    }
    return 0;
}