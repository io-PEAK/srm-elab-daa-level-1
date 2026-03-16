#include<stdio.h>
#include<stdlib.h>

int t,n,q,i,j,w,a[55],b[55];

int cmp(const void *x,const void *y){
return *(int*)x-*(int*)y;
}

int main(){
scanf("%d",&t);

while(t!=0) {

scanf("%d",&n);

int even=0,odd=0;

for(i=0;i<n;i++){
scanf("%d",&a[i]);
if(a[i]%2) odd++;
else even++;
}

if(even%2==0 && odd%2==0){
printf("YES\n");
}
else{

qsort(a,n,sizeof(int),cmp);

w=0;
for(i=1;i<n;i++)
if(a[i]-a[i-1]==1) w=1;

if(w) printf("YES\n");
else printf("NO\n");
}

t--;
}
return 0;
}