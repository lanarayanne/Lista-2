/*Determine se um determinado ano lido e bissexto. 
Sendo que um ano é bissexto se for divisível por 400 ou se for divisível por 4 e não for divisível por 100. 
Por exemplo: 1988, 1992, 1996;
*/ 

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int ano, test1, test2, test3;
    
    printf("Insira um ano: ");
    scanf ("%d", &ano);
    
    test1 = ano%400;
    test2 = ano%4;
    test3 = ano%100;
    
    if (ano>=0) 
    {
    if (test1 == 0 || test2 == 0 && test3 != 0)
        {printf ("O ano %d e bissexto", ano);}
    else 
        {printf ("O ano %d NAO e bissexto", ano);}
    }
    else {printf ("Ano Invalido");}
return 0;
}