#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int alt;
    int base;

    printf("Digite a altura do triângulo: ");
    scanf("%d",&alt);

    printf("Digite o tamanho da base do triângulo: ");
    scanf("%d",&base);

    int result = ((alt * base) /2);

    printf("\nA área do triângulo é: %d\n\n",result);




}
