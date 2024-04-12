/*Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
A =(basemaior + basemenor) ∗ altura /2
Lembre-se a base maior e a base menor devem ser números maiores que zero.*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float bmaior, bmenor, alt, area;
    
    printf("Informe a base maior:  ");
    scanf ("%f", &bmaior);
    
    printf("Informe a base menor:  ");
    scanf ("%f", &bmenor);
    
    printf("Informe a altura:  ");
    scanf ("%f", &alt);
 
    if (bmaior > 0 && bmenor > 0 && alt > 0 && bmaior>bmenor)
    {
        area = ((bmaior + bmenor)*alt)/2.0;
        printf ("A area do trapezio e %.2f", area);
    }
    else
    {
        if (bmaior <=0) {printf ("\nO valor da base maior e invalido");}
        if (bmenor <=0) {printf ("\nO valor da base menor e invalido");}
        if (alt <=0) {printf ("\nO valor da altura e invalido");}
        if (bmaior < bmenor) {printf ("\nBase maior informada e menor que a base menor");}
    }
return 0;
}
