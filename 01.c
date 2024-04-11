/*Faça um programa que receba dois números e mostre qual deles é o maior.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float num1, num2;
    printf("Digite o primeiro numero: ");
    scanf ("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf ("%f", &num2);
    
    if (num1 > num2) {printf ("O maior numero e: %.2f", num1);}
    if (num2 > num1) {printf ("O maior numero e: %.2f", num2);}
    if (num1 == num2) {printf ("Os numeros sao iguais");}
    
    return 0;
}