/*Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal,
utilizando as seguintes formulas (onde h corresponde a altura):
• Homens: (72.7 ∗ h) − 58
• Mulheres: (62, 1 ∗ h) − 44, 7*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float altura, peso;
    char genero;
    
    printf("Informe (F) para Feminino, (M) para Masculino:  ");
    scanf ("%c", &genero);
    
    switch (genero)
    {
        case 77:
        printf("Digite a altura em metros: ");
        scanf ("%f", &altura);
        peso = (72.7 * altura)-58.0;
        printf ("O peso ideal para Homens com %.2fm e: %.2fKg", altura, peso); break;
        
        case 109: 
        printf("Digite a altura em metros: ");
        scanf ("%f", &altura);
        peso = (72.7 * altura)-58.0;
        printf("O peso ideal para Homens com %.2fm e: %.2fKg", altura, peso); break;
        
        case 70: 
        printf("Digite a altura em metros: ");
        scanf ("%f", &altura);
        peso = (62.1 * altura)-44.7;
        printf ("O peso ideal para Mulheres com %.2fm e: %.2fKg", altura, peso); break;
    
        case 102: 
        printf("Digite a altura em metros: ");
        scanf ("%f", &altura);
        peso = (62.1 * altura)-44.7;
        printf ("O peso ideal para Mulheres com %.2fm e: %.2fKg", altura, peso); break;
        
        default: 
        printf ("Opcao invalida");
    }

    return 0;
}