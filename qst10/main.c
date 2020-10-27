#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float a;
    char b;
    float x;

    printf("Escolha a escala para a conversão C ou F : ");
    scanf("%c",&b);

    printf("Digite a temperatura: ");
    scanf("%f",&a);

    if (b == 'c')
    {
        x = (a - 32) /1.8;
        printf("A temperatura de Fahrenheit para Celsius é %f\n\n",x);

    }
    else if (b =='f')
    {
        x = a * 1.8 + 32;
        printf("A temperatura de Celsius para Fahrenheit é %f\n\n",x);
    }
    else if(b !='c' && b != 'f')
    {
        printf("Não foi possivel ler essa escala.\n\n");
    }





}
