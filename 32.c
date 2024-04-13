/*Escrever um programa que leia o código do produto escolhido do cardápio de uma lanchonete e a quantidade. 
O programa deve calcular o valor a ser pago por aquele lanche. Considere que a cada execução somente será calculado um pedido. 
O cardápio da lanchonete segue o padrão abaixo:*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo, quantidade;
    float cq=1.20, baurus=1.30, bcovo= 1.50, hamb=1.20, cheese=1.70, suco=2.20, refri=1.00, valor;
    
    printf("Produtos:\n(100) Cachorro Quente\n(101) Bauru Simples\n(102) Bauru com Ovo\n(103) Hamburguer\n(104) Cheeseburguer\n(105) Suco\n(106) Refrigerante\nCodigo: ");
    scanf ("%d", &codigo);
    printf("Insira  a quantidade: ");
    scanf ("%d", &quantidade);
    
   switch (codigo)
   {
       case 100:
       valor = cq*quantidade;
       printf ("\nCachorro Quente - R$ %.2f", valor);
       break;
       
       case 101:
       valor = baurus*quantidade;
       printf ("\nBauru Simples - R$ %.2f", valor);
       break;
       
       case 102:
       valor = bcovo*quantidade;
       printf ("\nBauru com Ovo - R$ %.2f", valor);
       break;
       
       case 103:
       valor = hamb*quantidade;
       printf ("\nHamburguer - R$ %.2f", valor);
       break;
       
       case 104:
       valor = cheese*quantidade;
       printf ("\nCheeseburguer - R$ %.2f", valor);
       break;
       
       case 105:
       valor = suco*quantidade;
       printf ("\nSuco - R$ %.2f", valor);
       break;
       
       case 106:
       valor = refri*quantidade;
       printf ("\nRefrigerante - R$ %.2f", valor);
       break;
       
       default:
       printf ("Codigo Invalido");
       break;
   }
    
    return 0;
}