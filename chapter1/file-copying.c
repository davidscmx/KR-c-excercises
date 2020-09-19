// File copying
// Combined excercises 1.5, 1.6 and 1.7

#include <stdio.h>

int main(int argc, char* argv){

    int c;
   
    while ( (c = getchar()) != EOF)
    {
        putchar(c);
    }

    int valueEOF = (c = getchar()) != EOF;
    printf("valueExpression: %i\n", valueEOF);
    printf("EOF %i\n", EOF);

    return 0;
}