/*Leia a nota e o número de faltas de um aluno, e escreva seu conceito. De acordo com a tabela abaixo, 
quando o aluno tem mais de 20 faltas ocorre uma redução de conceito.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota, falta;
    char conceito = 65;
    
    printf("Informe a nota (0,0 - 10,0): ");
    scanf ("%f", &nota);
    printf("Informe a quantidade de faltas: ");
    scanf ("%f", &falta);
    
    
    if (nota >= 0 && nota <=10)
    
    {
        if (falta >=0 && falta <= 20)
        {
            if (nota >=9.0 && nota <=10.0) {printf ("Conceito %c", conceito);}
            if (nota >=7.5 && nota <=8.9) {printf ("Conceito %c", conceito+1);}
            if (nota >=5.0 && nota <=7.4) {printf ("Conceito %c", conceito+2);}
            if (nota >=4.0 && nota <=4.9) {printf ("Conceito %c", conceito+3);}
            if (nota >=0.0 && nota <=3.9) {printf ("Conceito %c", conceito+4);}
        }
        
        if (falta >=0 && falta > 20)
        {
            if (nota >=9.0 && nota <=10.0) {printf ("Conceito %c", conceito+1);}
            if (nota >=7.5 && nota <=8.9) {printf ("Conceito %c", conceito+2);}
            if (nota >=5.0 && nota <=7.4) {printf ("Conceito %c", conceito+3);}
            if (nota >=4.0 && nota <=4.9) {printf ("Conceito %c", conceito+4);}
            if (nota >=0.0 && nota <=3.9) {printf ("Conceito %c", conceito+5);}
        }
        
        if (falta < 0) {printf ("Quantidade de faltas invalida");}
    
    } else {printf ("Nota Invalida");}
    
return 0;
}