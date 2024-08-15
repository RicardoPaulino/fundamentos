#include <stdio.h>

void sp_to_dash(const char *str);

void main(void){
     char str[] = "isso é um teste";
    sp_to_dash(str);
    
}

void sp_to_dash(const char *str){
    while(*str){
        if(*str == ' ') printf("%c",'-');
        else printf("%c", *str);
        str++;
    }
}