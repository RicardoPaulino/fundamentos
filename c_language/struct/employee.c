#include <stdio.h>
#include <stdlib.h>

struct Employee{
    int idade;
    char nome[50];
    float salario;
};

int main(){
    struct Employee emp;

    printf("Digite o seu nome:\n");
    scanf("%s", emp.nome);

    printf("Digite sua idade:\n");
    scanf("%d", &emp.idade);

    printf("Digite o seu salario:\n");
    scanf("%f", &emp.salario);

    printf("Employee ID: %d\n", emp.idade);
    printf("Employee Name: %s\n", emp.nome);
    printf("Employee Salary: %.2f\n", emp.salario);

    return 0;
}