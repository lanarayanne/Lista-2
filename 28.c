/*Faça um programa que leia tres numeros inteiros positivos e efetue o calculo de uma das seguintes medias
de acordo com um valor numerico digitado pelo usuario:*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()

{
    int num1, num2, num3, geo, p1, p2, p3;
    float media, harm;
    char opcao;
    
    printf("Qual a media a ser calculada:\n(a) Geometrica\n(b) Ponderada\n(c) Harmonica\n(d) Aritmetica\n : ");
    scanf ("%c", &opcao); 
    printf("Informe o primeiro numero: ");
    scanf ("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf ("%d", &num2);
    printf("Informe o terceiro numero: ");
    scanf ("%d", &num3);
    
    switch (opcao)
    {
        case 65:
        case 97:
        geo = num1*num2*num3; //primeira parte do calculo
        media = cbrt (geo);
        printf ("A media Geometrica entre %d, %d e %d e %.2f", num1, num2,num3,media);
        break;
        
        case 66:
        case 98:
        printf("Informe peso do primeiro numero: ");
        scanf ("%d", &p1);
        printf("Informe peso do segundo numero: ");
        scanf ("%d", &p2);
        printf("Informe peso do terceiro numero: ");
        scanf ("%d", &p3);
        media = (num1*p1 + num2*p2 + num3*p3)/(p1+p2+p3);
        printf ("A media Ponderada entre %d, %d e %d e %.2f", num1, num2,num3,media);
        break;
        
        case 67:
        case 99:
        harm = (1.0/num1) + (1.0/num2) + (1.0/num3);
        media = 3.0 / harm;
        printf ("A media Harmonica entre %d, %d e %d e %.2f", num1, num2,num3,media);
        break;
        
        case 68:
        case 100:
        media = (num1 + num2 + num3) /3;
        printf ("A media Aritmetica entre %d, %d e %d e %.2f", num1, num2,num3,media);
        break;
        
        default:
        printf ("Opcao Invalida");
        break;
    }
    
return 0;
}