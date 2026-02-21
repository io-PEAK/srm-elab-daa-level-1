#include <stdio.h>
int main()
{
int T,X,Y,Z;
scanf("%d",&T);
while(T--){
scanf("%d%d",&X,&Y);
Z=21-(X+Y);
if((Z-1)*(10-Z)>=0)
printf("%d\n",Z);
else
printf("-1\n");
}
}