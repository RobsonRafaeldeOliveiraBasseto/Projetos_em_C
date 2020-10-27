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

    printf("Digite o raio do perímetro: ");
    scanf("%f",&x);

    y = 3.14 * pow (x,2);

    printf("\n\nO área da circunferência é: %f\n",y);

    z = (2 * 3.14 * x);

    printf("O perímetro da circunferência é: %f\n\n",z);
}
