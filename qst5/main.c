#include <stdio.h>
#include <stdlib.h>

int main()
{
    int alt;
    int base;

    printf("Digite a altura do triangulo: ");
    scanf("%d",&alt);

    printf("Digite o tamanho da base do triangulo: ");
    scanf("%d",&base);

    int result = ((alt * base) /2);

    printf("\nA area do triangulo eh: %d\n\n",result);




}
