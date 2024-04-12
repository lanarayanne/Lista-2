/*Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a  soma de todos os seus algarismos. 
Por exemplo, ao numero 251 corresponder  ao valor 8 (2 + 5 + 1). Se o número lido não for maior do que zero, o programa 
termina com a mensagem “Número invalido”.*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int num, dig1, dig2, dig3, rest1, rest2, soma;
    
    printf("Informe um numero de 3 digitos:  ");
    scanf ("%d", &num);
    
    if (num > 0 && num/100<10)
    {
    
    dig1 = num/100;
    rest1 = num%100;
    
    dig2 = rest1/10;
    rest2 = rest1%10;
    
    dig3 = rest2/1;
    
    soma = dig1 + dig2 + dig3;
    
    printf ("A soma %d + %d + %d e igual a %d",dig1, dig2, dig3, soma);
        
    } else {printf ("Numero invalido");}

    return 0;
}