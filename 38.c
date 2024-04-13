/*Leia uma data de nascimento de uma pessoa fornecida através de três números inteiros: Dia, Mês e Ano. 
Teste a validade desta data para saber se esta é uma data válida. Teste se o dia fornecido é um dia válido: 
dia > 0, dia ≤ 28 para o mês de fevereiro (29 se o ano for bissexto), dia ≤ 30 em abril, junho, setembro e novembro, 
dia ≤ 31 nos outros meses. Teste a validade do mês: mes > 0 e mes < 13. Teste a validade do ano: ano ≤ ano atual 
(use uma constante definida com o valor igual a 2008). Imprimir: “data válida” ou “data inválida” no final da 
execução do programa.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int ano, test1, test2, test3, dia, mes, anoat=2024, diaat=13, mesat= 4; //Hoje e dia 13/04/2024
    
    printf("Informe a data de nascimento: ");
    printf("\nInsira um dia: ");
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
    
    if (ano>=0 && ano <anoat) 
    {
        if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12) // 31 dias
        {
          if (dia>0 && dia <=31) {printf ("\nA data %2d/%2d/%4d e valida", dia, mes, ano);}
          if (dia<=0 || dia >31) {printf ("\nA data %2d/%2d/%4d NAO e valida\nDIA invalido", dia, mes, ano);}
        }
        
        if (mes==4 || mes==6 || mes==9 || mes==11) // 30 dias
        {
          if (dia>0 && dia <=30) {printf ("\nA data %2d/%2d/%4d e valida", dia, mes, ano);}
          if (dia<=0 || dia >30) {printf ("\nA data %2d/%2d/%4d NAO e valida\nDIA invalido", dia, mes, ano);}
        }
        
        if (mes == 2) //Fevereiro
        {
            if (test1 == 0 || test2 == 0 && test3 != 0) // ANO BISSEXTO
            {
                if (dia>0 && dia <=29) {printf ("\nA data %2d/%2d/%4d e valida", dia, mes, ano);}
                if (dia<=0 || dia >29) {printf ("\nA data %2d/%2d/%4d NAO e valida\nDIA invalido", dia, mes, ano);}
            }
            else // ANO NAO BISSEXTO
            {
                if (dia>0 && dia <=28) {printf ("\nA data %2d/%2d/%4d e valida", dia, mes, ano);}
                if (dia<=0 || dia >28) {printf ("\nA data %2d/%2d/%4d NAO e valida\nDIA invalido", dia, mes, ano);}
            }
        }
        if (mes<=0 || mes>12) {printf ("\nA data %2d/%2d/%4d NAO e valida\nMES invalido", dia, mes, ano);}
        
    }
    else 
    {
        if (ano <= 0) {printf ("\nA data %2d/%2d/%4d NAO e valida\nANO invalido", dia, mes, ano);}
        if (ano == anoat) 
        {
            if (mes>mesat) {printf ("\nA data %2d/%2d/%4d NAO e valida\nMES invalido", dia, mes, ano);}
            if (mes == mesat)
            {
                if (dia <= diaat) {printf ("\nA data %2d/%2d/%4d e valida", dia, mes, ano);}
                if (dia > diaat) {printf ("\nA data %2d/%2d/%4d NAO e valida\nDIA invalido", dia, mes, ano);}
            }
            if (mes < mesat) {printf ("\nA data %2d/%2d/%4d e valida", dia, mes, ano);}
        
        }
    }
    
return 0;
}