/*Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida. 
Escreva uma mensagem de erro se a opc ̧ao for inválida.
Escolha a opção:
1- Soma de 2 números.
2- Diferença entre 2 números (maior pelo menor).
3- Produto entre 2 números.
4- Divisão entre 2 números (o denominador não pode ser zero).
Opção
*/ 

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int opcao;
    float num1, num2, calc;
    
    printf("Escolha uma opcao:\n1- Soma de 2 números.\n2- Diferença entre 2 números (maior pelo menor).\n3- Produto entre 2 números.\n4- Divisão entre 2 números.\nOpcao: ");
    scanf ("%d", &opcao);
    
    switch (opcao)
    {
        case 1:
        printf ("Insira o primeiro numero: ");
        scanf ("%f", &num1);
        printf ("Insira o segundo numero: ");
        scanf ("%f", &num2);
        calc=num1+num2;
        printf ("%.2f + %.2f = %.2f", num1, num2, calc);
        break;
        
        case 2:
        printf ("Insira o primeiro numero: ");
        scanf ("%f", &num1);
        printf ("Insira o segundo numero: ");
        scanf ("%f", &num2);
            if (num1>num2) 
            {calc=num1-num2;
            printf ("%.2f - %.2f = %.2f", num1, num2, calc);}
            if (num2>num1) 
            {calc=num2-num1;
            printf ("%.2f - %.2f = %.2f", num2, num1, calc);}
        break;
        
        case 3:
        printf ("Insira o primeiro numero: ");
        scanf ("%f", &num1);
        printf ("Insira o segundo numero: ");
        scanf ("%f", &num2);
        calc=num1*num2;
        printf ("%.2f * %.2f = %.2f", num1, num2, calc);
        break;
        
        case 4:
        printf ("Insira o primeiro numero: ");
        scanf ("%f", &num1);
        printf ("Insira o segundo numero: ");
        scanf ("%f", &num2);
            if (num2 == 0) { printf ("O denominador nao pode ser zero (0)");}
            else 
            {calc=num1/num2;
            printf ("%.2f * %.2f = %.2f", num1, num2, calc);}
        break;
        
        default:
        printf ("Opcao invalida");
        
    }
    
return 0;
}