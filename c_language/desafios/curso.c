#include <stdio.h>
#define DESTROS 104

int main()
{
    float percCanhotos = 1/9;
    float totalAlunos, totalCanhotos;

    totalAlunos = (DESTROS * 9) / 8;

    totalCanhotos = totalAlunos / 9;

    printf("total alunos: %.2f\n",totalAlunos); 
    printf("total canhotos: %.2f\n",totalCanhotos);

    return 0;
}
