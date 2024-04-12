/*Faça um algoritmo que calcule a média ponderada das notas de 3 provas. 
A primeira e a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, 
mostrar a média do aluno  e indicar se o aluno foi aprovado ou reprovado. 
A nota para aprovação ̧ao deve ser igual ou superior a 60 pontos.*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float nota1, nota2, nota3, media, p1=1.0, p2=1.0, p3=2;
    
    printf("Informe a primeira nota:  ");
    scanf ("%f", &nota1);
    printf("Informe a segunda nota:  ");
    scanf ("%f", &nota2);
    printf("Informe a terceira nota:  ");
    scanf ("%f", &nota3);
    
    if (nota1>=0 && nota1<=100 && nota2>=0 && nota2<=100 && nota3>=0 && nota3<=100)
    {
        media = ((nota1*p1)+(nota2*p2)+(nota3*p3))/(p1+p2+p3);
        printf ("\nA media ponderada e %.2f", media);
        
        if (media>=60) {printf ("\nO aluno esta APROVADO");}
        else {printf ("\nO aluno esta REPROVADO");}
        
    }
    else 
    {
        if (nota1 <0 || nota1>100) {printf ("A primeira nota e invalida");}
        if (nota2 <0 || nota2>100) {printf ("A segunda nota e invalida");}
        if (nota3 <0 || nota3>100) {printf ("A terceira nota e invalida");}
    }
    
    return 0;
}