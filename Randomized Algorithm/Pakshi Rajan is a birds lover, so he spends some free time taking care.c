#include <stdio.h>
#define MAXN 105

int s[MAXN];
int n;

#define read(x) scanf("%d",&x)

void sol() {
    int i,j;

    read(n);

    for(i=0;i<n;i++)
        read(s[i]);

    // sort sizes
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(s[i] > s[j]) {
                int t = s[i];
                s[i] = s[j];
                s[j] = t;
            }

    int treats = 1;
    int total = 1;

    for(i=1;i<n;i++) {
        if(s[i] > s[i-1])
            treats++;
        total += treats;
    }

    printf("%d\n", total);
}

int main() {
    int T;
    read(T);

    while(T--)
        sol();

    return 0;
}