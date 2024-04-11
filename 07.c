/*Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois numeros forem iguais,
imprima a mensagem  Números iguais.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int num1, num2;
    printf("Digite um numero inteiro: ");
    scanf ("%d", &num1);
    printf("Digite outro numero inteiro: ");
    scanf ("%d", &num2);
    
    if (num1 > num2) {printf ("O maior numero e %d", num1);}
    if (num2 > num1) {printf ("O maior numero e %d ", num2);}
    if (num1 == num2){printf ("Numeros iguais");}
    
    return 0;
}