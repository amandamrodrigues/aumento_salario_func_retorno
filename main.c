/*Refa�a o exerc�cio acima utilizando uma fun��o com
retorno para o c�lculo do aumento. O novo sal�rio do funcion�rio
dever� ser calculado na fun��o principal.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float aumento(float salario);
int main()
{
    setlocale (LC_ALL, "Portuguese");

    float sal, x, novosal;

    printf("Informe o valor do seu sal�rio: ");
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
