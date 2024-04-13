/*Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo, calcule e escreva o preço novo
e escreva uma mensagem em função do preço novo (de acordo com a segunda tabela).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precoantig, aumento, preconovo;
    
    printf("Insira o preco antigo R$ ");
    scanf ("%f", &precoantig);
    
    if (precoantig >= 0)
    
    {
    
    if (precoantig <= 50.0) 
    {
        aumento = 0.05*precoantig;
        preconovo = precoantig + aumento;
        printf ("\nPreco novo = R$ %.2f", preconovo);
    }
    
    if (precoantig >50.0 && precoantig <=100.0) 
    {
        aumento = 0.1*precoantig;
        preconovo = precoantig + aumento;
        printf ("\nPreco novo = R$ %.2f", preconovo);
    }
    
    if (precoantig > 100.0) 
    {
        aumento = 0.15*precoantig;
        preconovo = precoantig + aumento;
        printf ("\nPreco novo = R$ %.2f", preconovo);
    }
    
    // MENSAGEM
    
    if (preconovo <= 80.0) {printf ("\nBarato");}
    if (preconovo > 80.0 && preconovo <=120.0) {printf ("\nNormal");}
    if (preconovo > 120.0 && preconovo <=200.0) {printf ("\nCaro");}
    if (preconovo > 200.0) {printf ("\nMuito Caro");}
    
    } else {printf ("Valor Invalido");}
    
return 0;
}