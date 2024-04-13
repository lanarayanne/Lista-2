/*As tarifas de certo parque de estacionamento são as seguintes: 
• 1 a e 2a hora - R$ 1,00 cada
• 3 a e 4a hora - R$ 1,40 cada
• 5 a hora e seguintes - R$ 2,00 cada
O número de horas a pagar  é sempre inteiro e arredondado por excesso. Deste modo, quem estacionar durante 61 minutos 
pagará por duas horas, que é o mesmo que pagaria se tivesse permanecido 120 minutos. Os momentos de chegada ao parque e 
partida deste são apresentados na forma de pares de inteiros, representando horas e minutos. Por exemplo, o par 12 50 
representa “dez para a uma da tarde”. Pretende-se criar um programa que, lidos pelo teclado os momentos de chegada e 
de partida, escreva na tela o preço cobrado pelo estacionamento. Admite-se que a chegada e a partida se dão com intervalo
não superior a 24 horas. Portanto, se uma dada hora de chegada for superior a da partida, isso não é uma situação de erro, 
antes significa que a partida ocorreu no dia seguinte ao da chegada.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int hrchegada, minchegada, hrsaida, minsaida, difh, difmin, total, cont;
    float valor;
    
    printf("CHEGADA\nHoras (24h): ");
    scanf ("%d", &hrchegada);
    printf("Minutos: ");
    scanf ("%d", &minchegada);
    
    printf("SAIDA\nHoras (24h): ");
    scanf ("%d", &hrsaida);
    printf("Minutos: ");
    scanf ("%d", &minsaida);
    
    if (hrchegada >=0 && hrchegada<=23 && hrsaida >=0 && hrsaida<=23 && minchegada>=0 && minchegada<=59 && minsaida>=0 && minsaida<=59)
    {
        printf ("\nCHEGADA %d h %d min", hrchegada, minchegada);
        printf ("\nSAIDA %d h %d min", hrsaida, minsaida);
        
        if (hrchegada < hrsaida)
        {
            difh = hrsaida - hrchegada;
            difmin = minsaida - minchegada;
            total = (difh*60)+difmin;
            printf ("\nTempo de Permanencia: %d min", total);
                
        }
        
        if (hrchegada == hrsaida)
        {
            difmin = minsaida - minchegada;
            
                if (minchegada < minsaida) //Passou alguns Minutos
                { 
                    difmin = minsaida - minchegada;
                    total= difmin;
                    printf ("\nTempo de Permanencia: %d min",total);
                    
                } 
                if (minchegada > minsaida) //Passou pouco menos de um dia
                {
                    
                    difmin = minsaida - minchegada;
                    total = (24*60)+difmin;
                    printf ("\nTempo de Permanencia: %d min", total);
                }
                if (minchegada == minsaida) {printf ("Nao ha tempo de estacionamento OU Ultrapassou o Limite de 24h de permanencia");}
        }
        
        if (hrchegada > hrsaida) //Saiu no dia seguinte
        {
            difh = (24-hrchegada) + hrsaida;
            difmin = minsaida - minchegada;
            total = (difh*60)+difmin;
            printf ("\nTempo de Permanencia: %d min", total);
        }
        
        // VALOR
        
        if (total%60==0) 
        {
            cont = total/60;
                if (cont >=1 && cont <=2)
                {
                valor = 1.0 * cont;
                printf ("\nValor = R$ %.2f", valor);
                }
                if (cont >=3 && cont <=4)
                {
                valor = 1.4 * cont;
                printf ("\nValor = R$ %.2f", valor);
                }
                if (cont >=5)
                {
                valor = 2.0 * cont;
                printf ("\nValor = R$ %.2f", valor);
                }
        }
        else 
        {
            cont = (total/60)+1;
            if (cont >=1 && cont <=2)
                {
                valor = 1.0 * cont;
                printf ("\nValor = R$ %.2f", valor);
                }
                if (cont >=3 && cont <=4)
                {
                valor = 1.4 * cont;
                printf ("\nValor = R$ %.2f", valor);
                }
                if (cont >=5)
                {
                valor = 2.0 * cont;
                printf ("\nValor = R$ %.2f", valor);
                }
        }
        
    }
        else
        {
        if (hrchegada <=0 || hrchegada>=23) {printf ("Hora de Chegada Invalida");}
        if (hrsaida <=0 || hrsaida>=23) {printf ("Hora de Saida Invalida");}
        if (minchegada <=0 || minchegada>=59) {printf ("Minuto de Chegada Invalido");}
        if (minsaida <=0 || minsaida>=59) {printf ("Minuto de Chegada Invalido");}
        }


return 0;
        
}