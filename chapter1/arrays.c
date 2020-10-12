// Word, characters and new lines counter

#include <stdio.h>

// counts digits, white space, others

int main(int argc, char* argv){

    int c, i, nwhite, nother;
    int nDigit[10];

    nwhite, nother = 0;
    for (i=0; i<10;++i){
        nDigit[i]=0;
    }

    while ( (c = getchar()) != EOF)
    {
        if (c>= '0' && c<= '9')
        {
            ++nDigit[c-'0'];
        }
        else if (c==' ' || c=='\n' || c=='\t')
        {
            ++nwhite;
        }
        else{
            ++nother;
        }
    }

    printf("digits = ");
    for (i=0; i<10;++i){
        printf(" %d",nDigit[i]);
    }
    printf(" , white space %d, other %d\n", nwhite, nother);
        
    
}