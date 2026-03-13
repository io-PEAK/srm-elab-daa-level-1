#include <bits/stdc++.h>
using namespace std;

void insertionSort(long int *p,long int n){
    long int i,j,key;
    for(i=1;i<n;i++){
        key=p[i];
        j=i-1;
        while(j>=0 && p[j]>key){
            p[j+1]=p[j];
            j--;
        }
        p[j+1]=key;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin>>q;

    while(q--){                         // mandatory
        int n;
        cin>>n;

        long int a[105][105];
        long int row[105]={0},col[105]={0};

        int i,j;

        for(i=0;i<n;i++)                // mandatory exact form
            for(j=0;j<n;j++){
                cin>>a[i][j];
                row[i]+=a[i][j];
                col[j]+=a[i][j];
            }

        insertionSort(row,n);
        insertionSort(col,n);

        bool ok=true;
        for(i=0;i<n;i++)
            if(row[i]!=col[i]) ok=false;

        if(ok) cout<<"Possible\n";
        else cout<<"Impossible\n";
    }
}