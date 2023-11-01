/*Refaça o exercício acima utilizando uma função com
retorno para o cálculo do aumento. O novo salário do funcionário
deverá ser calculado na função principal.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float aumento(float salario);
int main()
{
    setlocale (LC_ALL, "Portuguese");

    float sal, x, novosal;

    printf("Informe o valor do seu salário: ");
    scanf("%f", &sal);

    x = aumento(sal);
    novosal = sal + x;

    printf("\nNovo Salario: %.2f", novosal);

}

    float aumento(float salario){
    float aum;
    if(salario<=300)
        aum = salario*0.35;
        else
            aum=salario*0.15;

    return aum;


}
