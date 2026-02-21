#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define CMDS 5
#define MAXWORDS 50
#define TOKENS 4
#define BUFLEN 1024

char sentence[BUFLEN];
int cl[CMDS];
char *lists[CMDS][MAXWORDS];
char *tokens[TOKENS]={"[N]","[AV]","[V]","[AJ]"};
char *cmds[CMDS]={"NOUNS","ADVERBS","VERBS","ADJECTIVES","END"};
int used[CMDS];
char buf[BUFLEN];

void printsub(){
    char tmp[BUFLEN],out[BUFLEN];
    strcpy(tmp,sentence);
    int t;
    for(t=0;t<TOKENS;t++){
        out[0]=0;
        char *p=tmp,*f;
        for(f=strstr(p,tokens[t]);f;f=strstr(p,tokens[t])){
            *f=0;
            strcat(out,p);
            strcat(out,lists[t][used[t]++]);
            p=f+strlen(tokens[t]);
        }
        strcat(out,p);
        strcpy(tmp,out);
    }
    printf("%s\n",tmp);
}

int main(){
    int cur=-1,c,i;
    fgets(sentence,BUFLEN,stdin);
    sentence[strcspn(sentence,"\n")]=0;
    for(;fgets(buf,BUFLEN,stdin);){
        buf[strcspn(buf,"\n")]=0;
        c=-1;
        for(i=0;i<CMDS;i++)
            if(strcmp(buf,cmds[i])==0)c=i;
        if(c>=0)cur=c;
        else{lists[cur][cl[cur]]=strdup(buf);cl[cur]++;}
    }
    printsub();
    printsub();
}