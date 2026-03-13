#include<iostream> 
 
using namespace std; 
 
int m, n, x=1; 
int main() 
{ 
    cin>>n>>m; 
    while ((x/2) < n || (x/3) < m|| (x/2) +( x/3) - (x/6) < (m+n)) 
        ++x; 
    cout << x; 
}