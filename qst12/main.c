#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int a;
    int b;
    int c;

    printf("Digite o primeiro lado do tri�ngulo: ");
    scanf("%d",&a);

    printf("Digite o segundo lado do tri�ngulo: ");
    scanf("%d",&b);

    printf("Digite o terceiro lado do tri�ngulo: ");
    scanf("%d",&c);

    if((a == b) && (b == c) && (a == c))
    {
        printf("este � um tri�ngulo equil�tero.");
    }
    else if ((a != b) && (b != c) && (a != c))
    {
        printf("este � um tri�ngulo escaleno.");
    }
    else if ((a == b) && (b != c) && (a != c))
    {
        printf("este � um tri�ngulo is�sceles.");
    }
    else if ((a != b) && (b != c) && (a == c))
    {
        printf("este � um tri�ngulo is�sceles.");
    }
    else if ((a != b) && (b == c) && (a !=c))
    {
        printf("este � um tri�ngulo is�sceles.");
    }
}
