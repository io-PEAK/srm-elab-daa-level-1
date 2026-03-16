#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    int test; 
    cin>>test; 
    while(test--) 
    { 
        int n , s,t,g=0,l=0; 
        cin>>n>>s; 
        for(int i=0;i<n;i++) 
        { 
            cin>>t; 
            if(t>s) 
            g++ ; 
            else 
            l++; 
        } 
        printf("%d\n",abs(g-l)); 
    } 
}