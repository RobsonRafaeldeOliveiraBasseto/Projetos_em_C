#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int alt;
    int base;

    printf("Digite a altura do tri�ngulo: ");
    scanf("%d",&alt);

    printf("Digite o tamanho da base do tri�ngulo: ");
    scanf("%d",&base);

    int result = ((alt * base) /2);

    printf("\nA �rea do tri�ngulo �: %d\n\n",result);




}
