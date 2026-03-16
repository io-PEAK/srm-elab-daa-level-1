#include <bits/stdc++.h>
using namespace std;

int edge(vector<int>*adj,vector<bool>&vis,int curr)
{
    vis[curr] = true;
    int count = 1;

    for(int x : adj[curr])
        if(!vis[x])
            count += edge(adj,vis,x);

    return count;
}

int main()
{
    int n;
    cin>>n;

    vector<int> a(n);

    for(int i=0;i<n;i++)
        cin>>a[i];

    vector<int> adj[n];

    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(__gcd(a[i],a[j])==1)
            {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }

    vector<bool> vis(n,false);

    int connected = edge(adj,vis,0);

    if(connected==n)
    {
        cout<<0<<"\n";
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
    }
    else
    {
        cout<<1<<"\n";
        a[0]=47;
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
    }

    return 0;
}