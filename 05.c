/*Faça a um programa que receba um número inteiro e verifique se este número  é par ou  ímpar.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int num;
    printf("Digite um numero inteiro: ");
    scanf ("%d", &num);
    
    if (num%2 == 0) {printf ("O numero %d e par", num);}
    else {printf ("O numero %d e impar", num);}
    
    return 0;
}