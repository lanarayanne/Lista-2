/*A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo de 0 até 10, 
respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. 
A média das três notas mencionadas anteriormente obedece aos pesos: 
Trabalho de Laboratório: 2; 
Avaliação Semestral: 3; 
Exame Final: 5. 
De acordo com o resultado, mostre na tela se o aluno está reprovado (média entre 0 e 2,9), 
de recuperação (entre 3 e 4,9) ou se foi aprovado. Faça todas as verificações necessárias.
.*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float nota1, nota2, nota3, media, p1=2.0, p2=3.0, p3=5.0;
    
    printf("Nota do Trabalho de Laboratorio:  ");
    scanf ("%f", &nota1);
    printf("Nota da Avaliacao Semestral:  ");
    scanf ("%f", &nota2);
    printf("Nota do Exame Final:  ");
    scanf ("%f", &nota3);
    
    if (nota1>=0 && nota1<=10 && nota2>=0 && nota2<=10 && nota3>=0 && nota3<=10)
    {
        media = ((nota1*p1)+(nota2*p2)+(nota3*p3))/(p1+p2+p3);
        printf ("\nA media e %.1f", media);
        
        if (media>=0 && media <= 2.9) {printf ("\nSituacao: REPROVADO");}
        if (media>=3 && media <= 4.9) {printf ("\nSituacao: RECUPERACAO");}
        if (media>=5) {printf ("\nSituacao: APROVADO");}

    }
    else 
    {
        if (nota1 <0 || nota1>10) {printf ("A primeira nota e invalida");}
        if (nota2 <0 || nota2>10) {printf ("A segunda nota e invalida");}
        if (nota3 <0 || nota3>10) {printf ("A terceira nota e invalida");}
    }
    
    return 0;
}