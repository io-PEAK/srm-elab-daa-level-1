#include <stdio.h>
#include <string.h>

#define MAX 400005

int max(int a,int b)
{
    return (a>b)?a:b;
}

int min(int a,int b)
{
    return (a<b)?a:b;
}

int diff[MAX];

int main()
{
    int T;
    scanf("%d",&T);

    while(T--)
    {
        int N,Q;
        scanf("%d %d",&N,&Q);

        int X[N], R[N];

        for(int i=0;i<N;i++)
            scanf("%d",&X[i]);

        for(int i=0;i<N;i++)
            scanf("%d",&R[i]);

        memset(diff,0,sizeof(diff));

        int SHIFT = 200000;   // to handle negative indices

        for(int i=0;i<N;i++)
        {
            int L = X[i] - R[i];
            int RR = X[i] + R[i];

            if(X[i] > 0)
                L = max(L,1);
            else
                RR = min(RR,-1);

            if(L <= RR)
            {
                diff[L + SHIFT]++;
                diff[RR + SHIFT + 1]--;
            }
        }

        // Prefix sum
        for(int i=1;i<MAX;i++)
            diff[i] += diff[i-1];

        while(Q--)
        {
            int K;
            scanf("%d",&K);
            printf("%d\n", diff[K + SHIFT]);
        }
    }

    return 0;
}