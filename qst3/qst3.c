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

    printf("Digite um n�mero para o c�lculo: ");
    scanf("%d",&x);

    a = x + (x/2) + pow (x,x);
    resp = sqrt(a);


    printf("A resposta dada �: %d \n\n", resp);




}
