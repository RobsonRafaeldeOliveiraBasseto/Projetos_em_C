#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");


    int a;

    printf("Digite o ano e descubra se ele � bissexto ou n�o: ");
    scanf("%d",&a);

    if (a % 400 == 0 || a % 4 == 0 && a/100 != 0)
    {
        printf("Este ano de %d � um bissexto.",a);
    }
    else
    {
        printf("Este ano de %d n�o � um ano bissexto.",a);
    }

}
