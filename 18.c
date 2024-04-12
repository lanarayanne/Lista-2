/*Faça um programa que mostre ao usuário um menu com 4 opções de operações matemáticas (as básicas, por exemplo).
O usuário escolhe uma das opções e o seu programa então pede dois valores numéricos e realiza a operação, 
mostrando o resultado e saindo.*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    char operacao;
    float valor1, valor2, calc;
    
    printf("Qual operacao a ser realizada?\n(+) Soma\n(-) Subtracao\n(*) Multiplicacao\n(/) Divisao:\n  ");
    scanf ("%c", &operacao);
    
    switch (operacao)
    {
        case 43:
        printf("Informe o primeiro valor:  ");
        scanf ("%f", &valor1);
        printf("Informe o segundo valor:  ");
        scanf ("%f", &valor2);
        
        calc = valor1 + valor2;
        printf ("%.2f + %.2f = %.2f", valor1, valor2, calc);
        break;
        
        case 45:
        printf("Informe o primeiro valor:  ");
        scanf ("%f", &valor1);
        printf("Informe o segundo valor:  ");
        scanf ("%f", &valor2);
        
        calc = valor1 - valor2;
        printf ("%.2f - %.2f = %.2f", valor1, valor2, calc);
        break;
        
        case 42:
        printf("Informe o primeiro valor:  ");
        scanf ("%f", &valor1);
        printf("Informe o segundo valor:  ");
        scanf ("%f", &valor2);
        
        calc = valor1 * valor2;
        printf ("%.2f x %.2f = %.2f", valor1, valor2, calc);
        break;
        
        case 47:
        printf("Informe o primeiro valor:  ");
        scanf ("%f", &valor1);
        printf("Informe o segundo valor:  ");
        scanf ("%f", &valor2);
        
        calc = valor1 / valor2;
        if (valor2==0) {printf ("Nao e possivel dividir por 0");}
        else {printf ("%.2f / %.2f = %.2f", valor1, valor2, calc);}
        break;
        
        default:
        printf ("Operacao Invalida");
        break;
    }
    
return 0;
}