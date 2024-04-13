/*Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12, e se o dia existe naquele mês. 
Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em anos não bissextos.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int ano, test1, test2, test3, dia, mes;
    
    printf("Insira um dia: ");
    scanf ("%d", &dia);
    printf("Insira um mes (numero): ");
    scanf ("%d", &mes);
    printf("Insira um ano: ");
    scanf ("%d", &ano);
    
    test1 = ano%400;
    test2 = ano%4;
    test3 = ano%100;
    
    //meses de 31 dias: 1, 3, 5, 7, 8, 10, 12 
    //meses de 30 dias: 4, 6, 9, 11
    //mes de 28 ou 29 dias: 2
    
    if (ano>=0) 
    {
        if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12) // 31 dias
        {
          if (dia>0 && dia <=31) {printf ("A data %2d/%2d/%4d e valida", dia, mes, ano);}
          if (dia<=0 || dia >31) {printf ("A data %2d/%2d/%4d NAO e valida\nDIA invalido", dia, mes, ano);}
        }
        
        if (mes==4 || mes==6 || mes==9 || mes==11) // 30 dias
        {
          if (dia>0 && dia <=30) {printf ("A data %2d/%2d/%4d e valida", dia, mes, ano);}
          if (dia<=0 || dia >30) {printf ("A data %2d/%2d/%4d NAO e valida\nDIA invalido", dia, mes, ano);}
        }
        
        if (mes == 2) //Fevereiro
        {
            if (test1 == 0 || test2 == 0 && test3 != 0) // ANO BISSEXTO
            {
                if (dia>0 && dia <=29) {printf ("A data %2d/%2d/%4d e valida", dia, mes, ano);}
                if (dia<=0 || dia >29) {printf ("A data %2d/%2d/%4d NAO e valida\nDIA invalido", dia, mes, ano);}
            }
            else // ANO NAO BISSEXTO
            {
                if (dia>0 && dia <=28) {printf ("A data %2d/%2d/%4d e valida", dia, mes, ano);}
                if (dia<=0 || dia >28) {printf ("A data %2d/%2d/%4d NAO e valida\nDIA invalido", dia, mes, ano);}
            }
        }
        if (mes<=0 || mes>12) {printf ("A data %2d/%2d/%4d NAO e valida\nMES invalido", dia, mes, ano);}
        
    }
    else {printf ("A data %2d/%2d/%4d NAO e valida\nANO invalido", dia, mes, ano);}
    
return 0;
}