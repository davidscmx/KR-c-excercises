// Word, characters and new lines counter

#include <stdio.h>

#define IN (1)
#define OUT (0)

int main(int argc, char* argv){

    int c, nl, nw, nc, state;
    nl = nw = nc =0;

    while ( (c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n'){
            ++nl;
        }
        if (c == ' ' || c == '\t' || c == ' '){
            state = OUT;
        }
        else if (state == OUT){
            state = IN;
            ++nw;
        }
        
    }
    printf("%d %d %d \n", nl, nw, nc);
}