#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int a;
    int b;
    int c;
    int d;
    int p;
    int resp;
    int x;

    printf("Digite o primeiro lado do triângulo: ");
    scanf("%d",&a);

    printf("Digite o segundo lado do triângulo: ");
    scanf("%d",&b);

    printf("Digite o terceiro lado do triângulo: ");
    scanf("%d",&c);

    d = (a + b + c);
    p = (d/2);

    x = p * ((p-a) + (p-b) + (p-c));
    resp = sqrt(x);

    printf("O resultado da formula de Heron: %d",resp);
}
