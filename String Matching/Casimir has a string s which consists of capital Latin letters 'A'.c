#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        char str[50];              // required
        scanf("%s",str);           // required
        int a=0,b=0,c=0;
        for(int i=0;str[i];i++){
            if(str[i]=='A') a++;
            if(str[i]=='B') b++;
            if(str[i]=='C') c++;
        }
        if(b==a+c) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}