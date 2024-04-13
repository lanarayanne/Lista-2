/*Faça uma prova de matemática para crianças que estão aprendendo a somar números inteiros menores do que 100.
Escolha números aleatórios entre 1 e 100, e mostre na tela a pergunta: qual é a soma de a + b, onde a e b são os
números aleatórios. Peça a resposta. Faça cinco perguntas ao aluno, e mostre para ele as perguntas e as resposta
corretas, além de quantas vezes o aluno acertou.*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()

{
    int resposta, certo, cont=0;
    int a=85, b=23, c=74, d=19, e=36, f=55, g=61, h=95, i=5, j= 40;
    
    
    printf("Responda as Seguintes Questoes: "); // PRIMEIRA
    printf("\n(1) %d + %d =  ", a, b);
    scanf ("%d", &resposta);
    
        certo= a+b;
        printf ("%d + %d = %d ", a, b, certo);
        
        switch (resposta)
        {
            case 108: 
            printf ("\nCERTO");
            cont = cont+1;
            break;
            
            default:
            printf ("\nERRADO");
        }
     
    printf("\n\n(2) %d + %d =  ", c, d); //SEGUNDA
    scanf ("%d", &resposta);
    
        certo= c+d;
        printf ("%d + %d = %d ", a, b, certo);
        
        switch (resposta)
        {
            case 93: 
            printf ("\nCERTO");
            cont = cont+1;
            break;
            
            default:
            printf ("\nERRADO");
            break;
        }
    
    printf("\n\n(2) %d + %d =  ", e, f); //TERCEIRA
    scanf ("%d", &resposta);
    
        certo= e+f;
        printf ("%d + %d = %d ", e, f, certo);
        
        switch (resposta)
        {
            case 91: 
            printf ("\nCERTO");
            cont = cont+1;
            break;
            
            default:
            printf ("\nERRADO");
            break;
        }
        
    printf("\n\n(2) %d + %d =  ", g, h); //QUARTA
    scanf ("%d", &resposta);
    
        certo= g+h;
        printf ("%d + %d = %d ", g, h, certo);
        
        switch (resposta)
        {
            case 156: 
            printf ("\nCERTO");
            cont = cont+1;
            break;
            
            default:
            printf ("\nERRADO");
            break;
        }
            
    printf("\n\n(2) %d + %d =  ", i, j); //QUINTA
    scanf ("%d", &resposta);
    
        certo= i+j;
        printf ("%d + %d = %d ", i, j, certo);
        
        switch (resposta)
        {
            case 45: 
            printf ("\nCERTO");
            cont = cont+1;
            break;
            
            default:
            printf ("\nERRADO");
            break;
        }
    printf ("\n\nFIM\nVoce acertou %d de 5 questoes", cont);
return 0;
}