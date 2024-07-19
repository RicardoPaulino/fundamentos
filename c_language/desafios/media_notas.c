#include <stdio.h>

// Definições das cores ANSI
#define RESET "\033[0m"
#define BLUE "\033[34m"
#define RED "\033[31m"

int main() {
    float media, n1, n2;
    
    printf("Digite duas notas\n");
    scanf("%f %f", &n1, &n2);
    
    media = (n1 + n2) / 2;
    printf("Sua media eh %.2f\n", media);
    
    if (media >= 7.0) {
        printf(BLUE "\nAprovado." RESET);
    } else {
        printf(RED "\nReprovado" RESET);
    }
    
    return 0;
}
