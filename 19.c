/*Faça um programa para verificar se um determinado número inteiro é divisível por 3 ou 5, mas não simultaneamente pelos dois.*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int num, rest3, rest5;
    
    printf("Informe um numero inteiro:  ");
    scanf ("%d", &num);
    
    rest3 = num%3;
    rest5 = num%5;
    
    if (rest3 ==0 && rest5 != 0) {printf ("O numero %d e divisivel apenas por 3", num);}
    if (rest5 ==0 && rest3 != 0) {printf ("O numero %d e divisivel apenas por 5", num);}
    if (rest5 ==0 && rest3 == 0) {printf ("O numero %d e divisivel por 3 e por 5", num);}
    if (rest5 !=0 && rest3 != 0) {printf ("O numero %d nao e divisivel por 3 nem por 5", num);}
    
return 0;
}