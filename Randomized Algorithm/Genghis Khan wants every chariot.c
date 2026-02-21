#include<stdio.h>
#include<string.h>
#define MAXP 50
#define BUFLEN 110
char *gems[]={"NONE","Garnet","Amethyst","Aquamarine","Diamond","Emerald","Pearl","Ruby","Peridot","Sapphire","Tourmaline","Topaz","Lapis",0};
char ponies[MAXP][BUFLEN];
int rnk[MAXP],np;
int gemrank(char *s){
    int best=0,g;
    char tmp[BUFLEN],*w;
    strcpy(tmp,s);
    for(w=strtok(tmp," ");w;w=strtok(0," "))
        for(g=1;gems[g];g++)
            if(strcmp(w,gems[g])==0)best=g;
    return best;
}
int main(){
    int i,j;
    for(;fgets(ponies[np],BUFLEN,stdin);np++){
        ponies[np][strcspn(ponies[np],"\n")]=0;
        if(strcmp(ponies[np],"END")==0)break;
        rnk[np]=gemrank(ponies[np]);
    }
    for(i=0;i<np;i++)for(j=i+1;j<np;j++){
        int a=i,b=j,sw=0;
        if(rnk[a]<rnk[b])sw=1;
        if(rnk[a]==rnk[b])sw=strcmp(ponies[a],ponies[b])>0;
        if(sw){
            char t[BUFLEN];
            strcpy(t,ponies[a]);strcpy(ponies[a],ponies[b]);strcpy(ponies[b],t);
            int tr=rnk[a];rnk[a]=rnk[b];rnk[b]=tr;
        }
    }
    for(i=0;i<np;i++)puts(ponies[i]);
}