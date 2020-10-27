#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");

    int x;
    int a;
    int resp;

    printf("Digite um número para o cálculo: ");
    scanf("%d",&x);

    a = x + (x/2) + pow (x,x);
    resp = sqrt(a);


    printf("A resposta dada é: %d \n\n", resp);




}
