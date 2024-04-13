/*Faça um programa que receba a altura e o peso de uma pessoa.
De acordo com a tabela a seguir, verifique e mostra qual a classificação dessa pessoa.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, peso;
    
    printf("Digite a altura (m): ");
    scanf ("%f", &altura);
    printf("Digite o peso (Kg): ");
    scanf ("%f", &peso);
    
    if (peso < 60) 
    {
        if (altura < 1.20) {printf ("Classificacao: A");}
        if (altura >= 1.20 && altura <= 1.70) {printf ("Classificacao: B");}
        if (altura > 1.70) {printf ("Classificacao: C");}
    }
    
    if (peso >=60 && peso <=90) 
    {
        if (altura < 1.20) {printf ("Classificacao: D");}
        if (altura >= 1.20 && altura <= 1.70) {printf ("Classificacao: E");}
        if (altura > 1.70) {printf ("Classificacao: F");}
    }
    
    if (peso > 90) 
    {
        if (altura < 1.20) {printf ("Classificacao: G");}
        if (altura >= 1.20 && altura <= 1.70) {printf ("Classificacao: H");}
        if (altura > 1.70) {printf ("Classificacao: I");}
    }
    
    return 0;
}
