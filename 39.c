/*Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o salário atual 
e o tempo de servico de cada funcionário. Os funcionários com menor salário terão um aumento proporcionalmente 
maior do que os funcionários com um salário maior, e conforme o tempo de serviço na empresa, cada funcionário 
irá receber um bônus adicional de salário. Faça um programa que leia:
• o valor do salário atual do funcionário;
• o tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).
Use as tabelas abaixo para calcular o salário reajustado deste funcionário e imprima o valor do salário final 
reajustado, ou uma mensagem caso o funcionário não tenha direito a nenhum aumento.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float salat, ajuste, bonus, salnovo, salajust;
    int tempo;
    
    printf("Informe o salario atual: R$ ");
    scanf ("%f", &salat);
    printf("Informe o tempo de servico (anos): ");
    scanf ("%d", &tempo);
    
    if (salat <= 500)
    {
        ajuste = (0.25*salat);
        salajust= ajuste + salat;
        
            if (tempo<1) 
            {
                bonus = 0;
                salnovo = salajust + bonus;
                printf ("Salario com ajuste = R$ %.2f\nSem Bonus\nSalario Novo = R$ %.2f",salajust, salnovo);
            }
            
            if (tempo>=1 && tempo<=3) 
            {
                bonus = 100;
                salnovo = salajust + bonus;
                printf ("Salario com ajuste = R$ %.2f\nBonus = %.2f\nSalario Novo = R$ %.2f",salajust, bonus, salnovo);
            }
            
            if (tempo>=4 && tempo<=6) 
            {
                bonus = 200;
                salnovo = salajust + bonus;
                printf ("Salario com ajuste = R$ %.2f\nBonus = %.2f\nSalario Novo = R$ %.2f",salajust, bonus, salnovo);
            }
            
            if (tempo>=7 && tempo<=10) 
            {
                bonus = 300;
                salnovo = salajust + bonus;
                printf ("Salario com ajuste = R$ %.2f\nBonus = %.2f\nSalario Novo = R$ %.2f",salajust, bonus, salnovo);
            }
            
            if (tempo>10) 
            {
                bonus = 500;
                salnovo = salajust + bonus;
                printf ("Salario com ajuste = R$ %.2f\nBonus = %.2f\nSalario Novo = R$ %.2f",salajust, bonus, salnovo);
            }
            
            
    }
    
    if (salat >500 && salat <= 1000)
    {
        ajuste = (0.2*salat);
        salajust= ajuste + salat;
        
            if (tempo<1) 
            {
                bonus = 0;
                salnovo = salajust + bonus;
                printf ("Salario com ajuste = R$ %.2f\nSem Bonus\nSalario Novo = R$ %.2f",salajust, salnovo);
            }
            
            if (tempo>=1 && tempo<=3) 
            {
                bonus = 100;
                salnovo = salajust + bonus;
                printf ("Salario com ajuste = R$ %.2f\nBonus = %.2f\nSalario Novo = R$ %.2f",salajust, bonus, salnovo);
            }
            
            if (tempo>=4 && tempo<=6) 
            {
                bonus = 200;
                salnovo = salajust + bonus;
                printf ("Salario com ajuste = R$ %.2f\nBonus = %.2f\nSalario Novo = R$ %.2f",salajust, bonus, salnovo);
            }
            
            if (tempo>=7 && tempo<=10) 
            {
                bonus = 300;
                salnovo = salajust + bonus;
                printf ("Salario com ajuste = R$ %.2f\nBonus = %.2f\nSalario Novo = R$ %.2f",salajust, bonus, salnovo);
            }
            
            if (tempo>10) 
            {
                bonus = 500;
                salnovo = salajust + bonus;
                printf ("Salario com ajuste = R$ %.2f\nBonus = %.2f\nSalario Novo = R$ %.2f",salajust, bonus, salnovo);
            }
            
            
    }
    
    if (salat >1000 && salat <= 1500)
    {
        ajuste = (0.15*salat);
        salajust= ajuste + salat;
        
            if (tempo<1) 
            {
                bonus = 0;
                salnovo = salajust + bonus;
                printf ("Salario com ajuste = R$ %.2f\nSem Bonus\nSalario Novo = R$ %.2f",salajust, salnovo);
            }
            
            if (tempo>=1 && tempo<=3) 
            {
                bonus = 100;
                salnovo = salajust + bonus;
                printf ("Salario com ajuste = R$ %.2f\nBonus = %.2f\nSalario Novo = R$ %.2f",salajust, bonus, salnovo);
            }
            
            if (tempo>=4 && tempo<=6) 
            {
                bonus = 200;
                salnovo = salajust + bonus;
                printf ("Salario com ajuste = R$ %.2f\nBonus = %.2f\nSalario Novo = R$ %.2f",salajust, bonus, salnovo);
            }
            
            if (tempo>=7 && tempo<=10) 
            {
                bonus = 300;
                salnovo = salajust + bonus;
                printf ("Salario com ajuste = R$ %.2f\nBonus = %.2f\nSalario Novo = R$ %.2f",salajust, bonus, salnovo);
            }
            
            if (tempo>10) 
            {
                bonus = 500;
                salnovo = salajust + bonus;
                printf ("Salario com ajuste = R$ %.2f\nBonus = %.2f\nSalario Novo = R$ %.2f",salajust, bonus, salnovo);
            }
            
            
    }
    
    if (salat >1500 && salat <= 2000)
    {
        ajuste = (0.1*salat);
        salajust= ajuste + salat;
        
            if (tempo<1) 
            {
                bonus = 0;
                salnovo = salajust + bonus;
                printf ("Salario com ajuste = R$ %.2f\nSem Bonus\nSalario Novo = R$ %.2f",salajust, salnovo);
            }
            
            if (tempo>=1 && tempo<=3) 
            {
                bonus = 100;
                salnovo = salajust + bonus;
                printf ("Salario com ajuste = R$ %.2f\nBonus = %.2f\nSalario Novo = R$ %.2f",salajust, bonus, salnovo);
            }
            
            if (tempo>=4 && tempo<=6) 
            {
                bonus = 200;
                salnovo = salajust + bonus;
                printf ("Salario com ajuste = R$ %.2f\nBonus = %.2f\nSalario Novo = R$ %.2f",salajust, bonus, salnovo);
            }
            
            if (tempo>=7 && tempo<=10) 
            {
                bonus = 300;
                salnovo = salajust + bonus;
                printf ("Salario com ajuste = R$ %.2f\nBonus = %.2f\nSalario Novo = R$ %.2f",salajust, bonus, salnovo);
            }
            
            if (tempo>10) 
            {
                bonus = 500;
                salnovo = salajust + bonus;
                printf ("Salario com ajuste = R$ %.2f\nBonus = %.2f\nSalario Novo = R$ %.2f",salajust, bonus, salnovo);
            }
            
            
    }
    
    if (salat >2000)
    {
        ajuste = (0.0*salat);
        salajust= ajuste + salat;
        
            if (tempo<1) 
            {
                bonus = 0;
                salnovo = salajust + bonus;
                printf ("Sem Ajuste\nSem Bonus\nSalario Novo = R$ %.2f", salnovo);
            }
            
            if (tempo>=1 && tempo<=3) 
            {
                bonus = 100;
                salnovo = salajust + bonus;
                printf ("Sem Ajuste\nBonus = %.2f\nSalario Novo = R$ %.2f", bonus, salnovo);
            }
            
            if (tempo>=4 && tempo<=6) 
            {
                bonus = 200;
                salnovo = salajust + bonus;
                printf ("Sem Ajuste\nBonus = %.2f\nSalario Novo = R$ %.2f", bonus, salnovo);
            }
            
            if (tempo>=7 && tempo<=10) 
            {
                bonus = 300;
                salnovo = salajust + bonus;
                printf ("Sem Ajuste\nBonus = %.2f\nSalario Novo = R$ %.2f", bonus, salnovo);
            }
            
            if (tempo>10) 
            {
                bonus = 500;
                salnovo = salajust + bonus;
                printf ("Sem Ajuste\nBonus = %.2f\nSalario Novo = R$ %.2f", bonus, salnovo);
            }
    }
    
return 0;
}