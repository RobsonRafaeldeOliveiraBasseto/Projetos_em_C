#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");

    float x;
    float y;
    float z;

    printf("Digite o raio do per�metro: ");
    scanf("%f",&x);

    y = 3.14 * pow (x,2);

    printf("\n\nO �rea da circunfer�ncia �: %f\n",y);

    z = (2 * 3.14 * x);

    printf("O per�metro da circunfer�ncia �: %f\n\n",z);
}
