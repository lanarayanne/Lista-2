/*O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão do distribuidor, e dos impostos. 
A comissão e os impostos são calculados sobre o custo de fábrica, de acordo com a tabela abaixo. 
Leia o custo de fábrica e escreva o custo ao consumidor.
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float custofab, dist, imp, valorf;
    
    printf("Informe Custo de Fabrica: R$ ");
    scanf ("%f", &custofab);
    
    if (custofab < 12000)
    {
        dist = 0.05*custofab;
        imp= 0;
        valorf= custofab+dist+imp;
        printf ("Custo ao Consumidor = R$ %.2f", valorf);
    }
    if (custofab >= 12000 && custofab <= 25000)
    {
        dist = 0.1*custofab;
        imp= 0.15*custofab;
        valorf= custofab+dist+imp;
        printf ("Custo ao Consumidor = R$ %.2f", valorf);
    }
    if (custofab > 25000)
    {
        dist = 0.15*custofab;
        imp= 0.20*custofab;
        valorf= custofab+dist+imp;
        printf ("Custo ao Consumidor = R$ %.2f", valorf);
    }  
    
    
return 0;
}