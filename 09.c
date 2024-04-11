/*Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for maior que 20% do salário imprima: 
Empréstimo não concedido, caso contrário imprima:  Empréstimo concedido.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float salario, prest, vinte;
    
    printf("Digite o valor do salario: ");
    scanf ("%f", &salario);
    printf("Digite o valor da prestacao: ");
    scanf ("%f", &prest);
    
    vinte= (0.2)*salario; // quanto e 20% do salario
    
    if (prest > vinte) {printf ("Emprestimo nao concedido");}
    else { printf ("Emprestimo concedido");}

    return 0;
}