#include <bits/stdc++.h>
using namespace std;

void makeheap(int x[],int n){
    for(int i=n/2-1;i>=0;i--){
        int cur=i;
        while(2*cur+1<n){
            int l=2*cur+1,r=2*cur+2;
            int largest=l;
            if(r<n && x[r]>x[l]) largest=r;
            if(x[cur]>=x[largest]) break;
            swap(x[cur],x[largest]);
            cur=largest;
        }
    }
}

void heapsort(int x[],int n){
    makeheap(x,n);
    for(int i=n-1;i>0;i--){
        swap(x[0],x[i]);
        int cur=0;
        while(2*cur+1<i){
            int l=2*cur+1,r=2*cur+2;
            int largest=l;
            if(r<i && x[r]>x[l]) largest=r;
            if(x[cur]>=x[largest]) break;
            swap(x[cur],x[largest]);
            cur=largest;
        }
    }
}

int main(){
    int T; scanf("%d",&T);
    while(T--){
        int n,b; scanf("%d %d",&n,&b);
        int a[n];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
heapsort(a,n);
        int cnt=0,sum=0;
        for(int i=0;i<n;i++){
            if(sum+a[i]>b) break;
            sum+=a[i];
            cnt++;
        }
        makeheap(a,n);
        printf("%d\n",cnt);
    }
}