#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char s[20];
    double sticks;
    double limit;
    double mj;
    double size,kg,mjpk;
    int num,den,j;
    scanf("%lf %s %lf",&sticks,s,&limit);
    num=atoi(s);den=1;
    for(j=0;s[j]!='\0';j++)
        if(s[j]=='/')den=atoi(s+j+1);
    size=(double)num/(double)den;
    kg=0.45;mjpk=7.5;mj=sticks*size*kg*mjpk;
    if(mj<=limit)
        printf("%.2lf the Mask can eat it!\n",mj);
    else
        printf("%.2lf the Mask should not eat it!\n",mj);
    return 0;
}