#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;

    long long a[1005];

    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    long long sum=0;
    long long prefix=0;

    for(int i=0;i<n;i++)
    {
        sum += (a[i]*i - prefix);
        prefix += a[i];
    }

    cout<<sum;

    return 0;
}