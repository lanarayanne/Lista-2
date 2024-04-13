/*Escreva um programa que, dado o valor da venda, imprima a comissão que deverá ser paga ao vendedor. 
Para calcular a comissão, considere a tabela abaixo:*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float valor, comissao, percent16, percent14;
    
    printf("Informe o valor da venda: ");
    scanf ("%f", &valor);
    
    percent16=0.16*valor;
    percent14=0.14*valor;
    
    if (valor >= 100000.0) 
    {
        comissao=700.00 + percent16;
        printf ("O valor da comissao e %.2f", comissao);
    }
    
    if (valor  < 100000.0 && valor >= 80000.0) 
    {
        comissao=650.00 + percent14;
        printf ("O valor da comissao e %.2f", comissao);
    }
    
    if (valor  < 80000.0 && valor >= 60000.0) 
    {
        comissao=600.00 + percent14;
        printf ("O valor da comissao e %.2f", comissao);
    }
    
    if (valor  < 60000.0 && valor >= 40000.0) 
    {
        comissao=550.00 + percent14;
        printf ("O valor da comissao e %.2f", comissao);
    }
    
    if (valor  < 40000.0 && valor >= 20000.0) 
    {
        comissao=500.00 + percent14;
        printf ("O valor da comissao e %.2f", comissao);
    }
    
    if (valor  < 20000.0) 
    {
        comissao=400.00 + percent14;
        printf ("O valor da comissao e %.2f", comissao);
    }
    
return 0;
}