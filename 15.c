/*Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana correspondente a este número. 
Isto e, domingo se 1, segunda-feira se 2, e assim por diante.*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int dia;
    
    printf("Insira um numero entre 1 e 7:  ");
    scanf ("%d", &dia);
    
    switch (dia)
    {
    case 1: 
    printf ("O dia %d e Segunda-Feira", dia);
    break;
    
    case 2: 
    printf ("O dia %d e Terca-Feira", dia);
    break;
    
    case 3: 
    printf ("O dia %d e Quarta-Feira", dia);
    break;
    
    case 4: 
    printf ("O dia %d e Quinta-Feira", dia);
    break;
    
    case 5: 
    printf ("O dia %d e Sexta-Feira", dia);
    break;
    
    case 6: 
    printf ("O dia %d e Sabado", dia);
    break;
    
    case 7: 
    printf ("O dia %d e Domingo", dia);
    break;
    
    default:
    printf ("Valor Invalido");
    return 0;
}

return 0;
}