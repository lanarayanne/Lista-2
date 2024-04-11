/*Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na tela a media destas notas. 
Uma nota válida deve ser, obrigatoriamente, um  valor entre 0.0 e 10.0, onde caso a nota não possua um valor válido, 
este fato deve ser informado ao usuario e o programa termina.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float nota1, nota2, media;
    
    printf("Digite a primeira nota: ");
    scanf ("%f", &nota1);
    printf("Digite segunda nota: ");
    scanf ("%f", &nota2);
    
    media = (nota1 + nota2)/2.0;
    
    if (nota1>=0 && nota1 <=10 && nota2>=0 && nota2<=10) {printf ("A media e igual a %.2f", media);}
    else
    {   if (nota1<0 || nota1 >10) {printf ("\nPrimeira nota invalida");}
        if (nota2<0 || nota2 >10) {printf ("\nSegunda nota invalida");}
    }
    
    return 0;
}