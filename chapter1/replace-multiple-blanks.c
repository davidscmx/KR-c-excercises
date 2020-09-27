// replaces multiple blanks with just one

#include <stdio.h>

int main(){
    int c;
    int n_spaces = 0;
    int space_flag = 0;

    while ( (c = getchar()) != EOF)
    {

        if (c != ' ' && space_flag==1){
            n_spaces = 0;
            space_flag = 0;
        }

        if (c == ' '){
            n_spaces++;
        }
        
        if (n_spaces>=2){
            space_flag=1;
        }
 
        if (!space_flag){
            putchar(c);
        }
    }    
}