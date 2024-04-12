/*Uma empresa vende o mesmo produto para quatro diferentes estados. 
Cada estado possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). 
Faça um programa em que o usuário entre com o valor e o estado destino do produto e o programa 
retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. 
Se o estado digitado não for válido, mostrar uma mensagem de erro.*/ 

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int estado;
    float valor, imposto, vfinal;
    
    printf("Informe o valor do produto: ");
    scanf ("%f", &valor);
    printf("Informe o destino:\n(1)-Minas Gerais\n(2)-Sao Paulo\n(3)-Rio de Janeiro\n(4)-Mato Grosso do Sul\nDestino: ");
    scanf ("%d", &estado);
    
    switch (estado)
    {
        case 1:
        imposto = 0.07 * valor;
        vfinal = valor + imposto;
        printf ("(1)- Minas Gerais\nValor final: R$ %.2f", vfinal);
        break;
        
        case 2:
        imposto = 0.12 * valor;
        vfinal = valor + imposto;
        printf ("(2)-Sao Paulo\nValor final: R$ %.2f", vfinal);
        break;
        
        case 3:
        imposto = 0.15 * valor;
        vfinal = valor + imposto;
        printf ("(4)-Mato Grosso do Sul\nValor final: R$ %.2f", vfinal);
        break;
        
        case 4:
        imposto = 0.08 * valor;
        vfinal = valor + imposto;
        printf ("(1)- Minas Gerais\nValor final: R$ %.2f", vfinal);
        break;
        
        default:
        printf ("Opcao Invalida");
        break;
    }
    
return 0;
}