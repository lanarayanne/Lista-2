/*Dados tres valores, A, B, C, verificar se eles podem ser valores dos lados de um triangulo e,
se forem, se e um triângulo escaleno, equilátero ou isóscele, considerando os seguintes conceitos:

• O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados.
• Chama-se equilátero o triângulo que tem três lados iguais.
• Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais.
• Recebe o nome de escaleno o triângulo que tem os três lados diferentes.*/ 

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float a, b, c;
    
    printf("Informe o lado A do triangulo:  ");
    scanf ("%f", &a);
    printf("Informe o lado B do triangulo:  ");
    scanf ("%f", &b);
    printf("Informe o lado C do triangulo:  ");
    scanf ("%f", &c);
    
    if (a>(b+c) || b>(a+c) || c>(a+b) || a<=0 || b<=0 || c<=0)
        {printf ("Os valores inseridos nao podem formar um triangulo");}
    else 
    {
        if (a==b && b==c) {printf ("O triangulo A=%.2f, B=%.2f, C=%.2f e equilatero", a, b, c);}
        if (a==b && a!=c && b!=c|| a==c && a!=b && c!=b || b==c && b!=a && c!=a ) {printf ("O triangulo A=%.2f, B=%.2f, C=%.2f e isoscele", a, b, c);}
        if (a!=b && a!=c && b!=c) {printf ("O triangulo A=%.2f, B=%.2f, C=%.2f e escaleno", a, b, c);}
    }
    
return 0;
}