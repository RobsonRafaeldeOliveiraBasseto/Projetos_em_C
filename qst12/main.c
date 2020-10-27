#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int a;
    int b;
    int c;

    printf("Digite o primeiro lado do triângulo: ");
    scanf("%d",&a);

    printf("Digite o segundo lado do triângulo: ");
    scanf("%d",&b);

    printf("Digite o terceiro lado do triângulo: ");
    scanf("%d",&c);

    if((a == b) && (b == c) && (a == c))
    {
        printf("este é um triângulo equilátero.");
    }
    else if ((a != b) && (b != c) && (a != c))
    {
        printf("este é um triângulo escaleno.");
    }
    else if ((a == b) && (b != c) && (a != c))
    {
        printf("este é um triângulo isósceles.");
    }
    else if ((a != b) && (b != c) && (a == c))
    {
        printf("este é um triângulo isósceles.");
    }
    else if ((a != b) && (b == c) && (a !=c))
    {
        printf("este é um triângulo isósceles.");
    }
}
