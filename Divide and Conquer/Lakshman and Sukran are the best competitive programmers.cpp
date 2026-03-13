#include <bits/stdc++.h> 
using namespace std; 
long long n, i = 1, j, k = 9e9, x, s[100001], d; 
  
int main() { 
    cin>>n; 
    for (; i <= n; i++){ cin>>x;s[i] = s[i - 1] + x;} 
    for (i = 1; i <= n; i++) 
        for (j = max(1ll, i - 20000); j <= i; j++) 
            if (i != j) k = min(k, (i - j) * (i - j) + (s[i] - s[j]) * (s[i] - s[j])); 
    cout << k; 
}