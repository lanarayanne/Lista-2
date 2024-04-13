/*Faça um algoritmo que calcule o IMC de uma pessoa e mostre sua classificação de acordo com a tabela abaixo:*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float peso, altura, imc;
    
    printf("Peso (Kg): ");
    scanf ("%f", &peso);
    printf("Altura (m): ");
    scanf ("%f", &altura);
    
    imc= peso / (altura*altura);
    
    if (imc<=18.5) { printf ("\nIMC: %.1f\nClassificacao: Abaixo do Peso", imc);}
    if (imc>=18.6 && imc<=24.9) { printf ("\nIMC: %.1f\nClassificacao: Saudavel", imc);}
    if (imc>=25.0 && imc<=29.9) { printf ("\nIMC: %.1f\nClassificacao: Peso em Excesso", imc);}
    if (imc>=30.0 && imc <=34.9) { printf ("\nIMC: %.1f\nClassificacao: Obesidade Grau I", imc);}
    if (imc>=35.0 && imc <=39.9) { printf ("\nIMC: %.1f\nClassificacao: Obesidade Grau II (severa)", imc);}
    if (imc>=40) { printf ("\nIMC: %.1f\nClassificacao: Obesidade Grau III (morbida)", imc);}
    
return 0;
}