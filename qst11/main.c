#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");


    int a;

    printf("Digite o ano e descubra se ele é bissexto ou não: ");
    scanf("%d",&a);

    if (a % 400 == 0 || a % 4 == 0 && a/100 != 0)
    {
        printf("Este ano de %d é um bissexto.",a);
    }
    else
    {
        printf("Este ano de %d não é um ano bissexto.",a);
    }

}
