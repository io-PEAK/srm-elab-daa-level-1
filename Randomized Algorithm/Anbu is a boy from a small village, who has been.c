#include <stdio.h>

int main(){
int T; scanf("%d",&T);
while(T--){
int N,b=0,w=0;
char S[100005];
scanf("%d",&N);
scanf("%s",S);

for(int i=0;i<N;i++){
if(i==0 || S[i]!=S[i-1]){
if(S[i]=='B') b++;
else w++;
}
}

if(b<w) printf("%d\n",b);
else printf("%d\n",w);
}
return 0;
}