#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,j,n;
    cin>>t;
    n=t;
    for(i=0;i<n;i++){
        int a[6],votes[3],total[3];
        for(j=0;j<6;j++)
            cin>>a[j];
        votes[0]=a[0];votes[1]=a[1];votes[2]=a[2];total[0]=a[3];total[1]=a[4];total[2]=a[5];
        int sumTotal=total[0]+total[1]+total[2];
        int v0=votes[0],v1=votes[1],v2=votes[2],sumVotes=v0+v1+v2;
        int flag=0;;
        if(sumVotes*2>sumTotal){
            flag=1;
        }
        if(flag==0){
            for(j=0;j<3;j++){
                int newVotes=sumVotes+(total[j]-votes[j]);
                if(newVotes*2>sumTotal){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}