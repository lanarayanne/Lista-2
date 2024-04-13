/*Calcule as raízes da equação de 2o grau.
Lembrando que:
A variável  a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Nao é equação de segundo grau”
• Se ∆ < 0, nao existe real. Imprima a mensagem  ̃ N~ao existe raiz.
• Se ∆ = 0, existe uma raiz real. Imprima a raiz e a mensagem Raiz  ́unica.
• Se ∆ ≥ 0, imprima as duas ra ́ızes reais.
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()

{
    float a, b, c, x1, x2, delt;
    
    printf("Dada a equacao ax^2 + bx + c\n");
    printf("Informe o valor de ""a"": ");
    scanf ("%f", &a);
    printf("Informe o valor de ""b"": ");
    scanf ("%f", &b);
    printf("Informe o valor de ""c"": ");
    scanf ("%f", &c);
    
    if (a == 0) {printf ("Nao e equacao do segundo grau");}
    if (a !=0)
    {
    delt = (b*b) - 4.0*a*c;
    x1= (b*(-1.0) + sqrt(delt))/(2.0*a);
    x2= (b*(-1.0) - sqrt(delt))/(2.0*a);
    
        if (delt < 0) {printf ("\nNao existe raizes reais");}
        if (delt == 0) {printf ("\nA raiz da equacao e %.2f", x1);}
        if (delt > 0) {printf ("\1As raizes da equacao sao %.2f e %.2f", x1, x2);}
    }
return 0;
}