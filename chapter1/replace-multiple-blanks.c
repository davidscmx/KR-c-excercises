// replaces multiple blanks with just one

#include <stdio.h>
#define NONBLANK '-'

int main(){
    int c;
    int lastc = NONBLANK;
    while ( (c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if(lastc != ' ')
            {
                putchar(c);
            }
                
        }
        else
        {
            putchar(c);
        }   

        lastc=c;
    }
}
   
    