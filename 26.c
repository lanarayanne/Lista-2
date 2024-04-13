/*Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um percurso, 
calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela abaixo:*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()

{
    float km, gasolina, consumo;
    
    printf("Informe a distancia percorrida (Km): ");
    scanf ("%f", &km);
    printf("Informe o consumo de gasolina (litros): ");
    scanf ("%f", &gasolina);
    
    consumo= km/gasolina;
    printf ("O automovel faz %.2f Km por Litro de gasolina", consumo);
    
    if (consumo < 8) {printf ("\nVenda o carro!");}
    if (consumo >=8 && consumo <=14) {printf ("\nEconomico!");}
    if (consumo > 14) {printf ("\nSuper Economico!");}

return 0;
}