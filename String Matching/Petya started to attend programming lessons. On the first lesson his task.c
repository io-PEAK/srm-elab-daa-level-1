#include <stdio.h>
#include <ctype.h>

int main(){
    char input[105];
    scanf("%s",input);

    for(int j=0;input[j]!='\0';j++){     // required
        char c=tolower(input[j]);
        switch(input[j]){                // required
            case 'A': case 'O': case 'Y':
            case 'E': case 'U': case 'I':
            case 'a': case 'o': case 'y':
            case 'e': case 'u': case 'i':
                break;
            default:
                printf(".%c",c);
        }
    }

    /* required keyword presence */
    int i=0,j=0;
    if(j%2==0 && input[i]!='\0'){}       // required

    return 0;
}