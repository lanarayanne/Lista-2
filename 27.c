/*Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()

{
    int idade;
    
    printf("Informe a Idade: ");
    scanf ("%d", &idade);
    
    if (idade < 0) {printf ("\nIdade Invalida");}
    if (idade <5) {printf ("\nSem Categoria");}
    if (idade >= 5 && idade <=7) {printf ("\nInfantil A");}
    if (idade >= 8 && idade <=10) {printf ("\nInfantil B");}
    if (idade >= 11 && idade <=13) {printf ("\nJuvenil A");}
    if (idade >= 14 && idade <=17) {printf ("\nJuvenil B");}
    if (idade >= 18) {printf ("\nSenior");}
    
return 0;
}