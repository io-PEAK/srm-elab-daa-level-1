#include<cstdio>
int n,m[22][22],f,dx[]={0,0,1,-1},dy[]={1,-1,0,0};
void dfs(int x,int y){
    if(m[x][y]<1||m[x][y]>3)return;
    if(m[x][y]==2){f=1;return;}
    m[x][y]=5;
    for(int i=0;i<4;i++)dfs(x+dx[i],y+dy[i]);
}
int main(){
    int t,i,j,sx,sy;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        f=sx=sy=0;
        for(i=0;i<22;i++)for(j=0;j<22;j++)m[i][j]=0;
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++){
                scanf("%d",&m[i][j]);
                if(m[i][j]==1){sx=i;sy=j;}
            }
        dfs(sx,sy);
        printf("%d\n",f);
    }
}