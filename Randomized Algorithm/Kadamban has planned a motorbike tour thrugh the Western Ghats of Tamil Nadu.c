#include <stdio.h>

int main() {
    int T, t;
    scanf("%d", &T);

    for(t=0;t<T;t++) {
        int n, i, count = 0;
        scanf("%d", &n);

        int a[105];

        for(i=0;i<n;i++)
            scanf("%d", &a[i]);

        for(i=1;i<n-1;i++) {
            if(a[i] > a[i-1] && a[i] > a[i+1])
                count++;
        }

        printf("%d\n", count);
    }

    return 0;
}