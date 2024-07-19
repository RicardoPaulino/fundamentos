#include <stdio.h>

// Definições das cores ANSI
#define RESET "\033[0m"
#define BLUE "\033[34m"
#define RED "\033[31m"

int main(){
    int lin, col, n;

    printf("\nQual o tamanho do tabuleiro?");
    scanf("%d",&n);
    for(lin = 1; lin <= n; lin++){
        printf("\n");
        for(col = 1; col <= n; col++){
            if((lin + col)%2 == 0) printf(BLUE "%c%c",220,220);
            else printf(RED "%c%c",220,220);
        }
    }
    printf("\n");
}