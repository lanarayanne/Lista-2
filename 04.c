/*Faça a um programa que leia um número e, caso ele seja positivo, calcule e mostre:
• O número digitado ao quadrado 
• A raiz quadrada do número digitado */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float num, raiz, quad;
    printf("Digite um numero real: ");
    scanf ("%f", &num);
    
    raiz = sqrt(num);
    quad = num*num;
    
    if (num >= 0) 
    {
        printf ("A raiz quadrada de %.2f e: %.2f\n", num, raiz);
        printf ("O quadrado de %.2f e: %.2f", num, quad);
        
    }
    else {printf ("Valor inválido");}
    
    return 0;
}