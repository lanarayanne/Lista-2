/*Faça um programa que receba três números e mostre-os em ordem crescente.*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()

{
    int num1, num2, num3;
   
    printf("Informe o primeiro numero: ");
    scanf ("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf ("%d", &num2);
    printf("Informe o terceiro numero: ");
    scanf ("%d", &num3);
    
    if (num1>num2 && num1>num3) 
    {
        if (num2>num3) {printf ("A ordem crescente e %d, %d, %d",num3, num2, num1);}
        else {printf ("A ordem crescente e %d, %d, %d",num2, num3, num1);}
    }
    
    if (num2>num1 && num2>num3) 
    {
        if (num1>num3) {printf ("A ordem crescente e %d, %d, %d",num3, num1, num2);}
        else {printf ("A ordem crescente e %d, %d, %d",num1, num3, num2);}
    }
    
    if (num3>num1 && num3>num2) 
    {
        if (num1>num2) {printf ("A ordem crescente e %d, %d, %d",num2, num1, num3);}
        else {printf ("A ordem crescente e %d, %d, %d",num1, num2, num3);}
    }

return 0;
}