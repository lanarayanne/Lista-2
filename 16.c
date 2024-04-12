/*Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mês correspondente a este número. 
Isto é, janeiro se  1, fevereiro se 2, e assim por diante.*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int mes;
    
    printf("Insira um numero entre 1 e 12:  ");
    scanf ("%d", &mes);
 
    switch (mes)
    {
    case 1: 
    printf ("O mes %d e Janeiro", mes);
    break;
    
    case 2: 
    printf ("O mes %d e Fevereiro", mes);
    break;
    
    case 3: 
    printf ("O mes %d e Marco", mes);
    break;
    
    case 4: 
    printf ("O mes %d e Abril", mes);
    break;
    
    case 5: 
    printf ("O mes %d e Maio", mes);
    break;
    
    case 6: 
    printf ("O mes %d e Junho", mes);
    break;
    
    case 7: 
    printf ("O mes %d e Julho", mes);
    break;
    
    case 8: 
    printf ("O mes %d e Agosto", mes);
    break;
    
    case 9: 
    printf ("O mes %d e Setembro", mes);
    break;
    
    case 10: 
    printf ("O mes %d e Outubro", mes);
    break;
    
    case 11: 
    printf ("O mes %d e Novembro", mes);
    break;
    
    case 12: 
    printf ("O mes %d e Dezembro", mes);
    break;
    
    default:
    printf ("Valor Invalido");
}

return 0;
}