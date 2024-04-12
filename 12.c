/*Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Numero invalido”. 
Se o número for positivo, calcular o logaritmo desse número.*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float num, logt;
    
    printf("Informe um numero inteiro positivo:  ");
    scanf ("%f", &num);
    
    if (num <= 0)    {printf ("Numero Invalido");}
    else 
    {
        logt = log(num)/log(10);
        printf ("O logaritmo de %.2f na base 10 e %f", num, logt);
    }
    
    return 0;
}