/*Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima o número ao quadrado.*/

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
    
    if (num > 0) {printf ("A raiz quadrada de %.2f e: %.2f", num, raiz);}
    if (num < 0) {printf ("O quadrado de %.2f e: %.2f", num, quad);}
    if (num == 0) {printf ("A raiz quadrada de %.2f e: %.2f\ne o quadrado de %.2f e: %.2f", num, raiz, num, quad);}
    
    return 0;
}
   