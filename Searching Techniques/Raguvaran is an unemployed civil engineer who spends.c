#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    int cas=1;
    while(t--)
    {
        char w[65];
        scanf("%s",w);
        int n=strlen(w);
        int i,j,l;
        long long d[62][62];
        memset(d,0,sizeof(d));
        for(l=1;l<=n;l++)
        {
            for(i=1;i<=n-l+1;i++)
            {
                j=i+l-1;
                long long base=d[i+1][j]+d[i][j-1];
                long long sub=d[i+1][j-1];
                if(w[i-1]==w[j-1])
                {
                    d[i][j]=base+1;
                }
                else
                {
                    d[i][j]=base-sub;
                }
            }
        }
        printf("Line %d: %lld\n",cas++,d[1][n]);
    }
    return 0;
}