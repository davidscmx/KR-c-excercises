// line counting

#include <stdio.h>

int main(){
    int c,nl,tab,space;
    nl = 0;
    tab = 0;
    space = 0;
    while ( (c = getchar()) != EOF)
    {
        if (c == '\n'){
            nl++;
        }
        
        if (c == ' '){
            space++;
        }

        if (c == '\t'){
            tab++;
        }
    }
    printf("\n", nl);
    printf("newlines %d\n", nl);
    printf("tabs %d\n", tab);
    printf("spaces %d\n", space);
}