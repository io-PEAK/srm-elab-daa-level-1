#include <bits/stdc++.h>
using namespace std;
#define f(n) for(i=0;i<n;i++)
#define g(n) for(i=1;i<n;i++)
#define k(n) for(i=n-2;i>=0;i--)
int maxWater(int arr[],int n)
{
 int left[n],i;
 int right[n];
 int water=0;
 left[0]=arr[0];
 g(n)
 left[i]=max(left[i-1],arr[i]);
 right[n-1]=arr[n-1];
 k(n)
 right[i]=max(right[i+1],arr[i]);
 for(i=1;i<n-1;i++)
 {
 int var=min(left[i-1],right[i+1]);
 if(var>arr[i])
 {
 water+=var-arr[i];
 }
 }
 return water;
}
int main()
 {
 int n,i;
 cin>>n;
 int arr[n];
 f(n){
 cin>>arr[i];
 }
 cout<<maxWater(arr,n);
 return 0;
}