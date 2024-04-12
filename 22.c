/*Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. 
As condicoeses para aposentadoria são
• Ter pelo menos 65 anos,
• Ou ter trabalhado pelo menos 30 anos,
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos. */ 

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float idade, tempo;
    
    printf("Informe a idade: ");
    scanf ("%f", &idade);
    printf("Informe o tempo trabalhado: ");
    scanf ("%f", &tempo);
    
    if (idade > tempo)
    {
        if (idade>= 65 || tempo>=30 || idade>=60 && tempo>=25)
        {printf ("Aposentadoresia PERMITIDA");}
        else {printf ("Aposentadoria NEGADA");}
    }
    else {printf ("O tempo de trabalho e maior ou igual a idade informada");}
return 0;
}