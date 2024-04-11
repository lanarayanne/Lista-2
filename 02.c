/*Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do número. 
Se o número for negativo, mostre uma mensagem dizendo que o número  é  inválido.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float num, raiz;
    printf("Digite um numero positivo: ");
    scanf ("%f", &num);
    
    raiz = sqrt(num);
    
    if (num >= 0) {printf ("A raiz quadrada de %.2f e: %.2f", num, raiz);}
    if (num < 0) {printf ("Valor invalido");}
    
    return 0;
}