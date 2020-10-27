#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int x;
    int y;
    int aux;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);

    printf("Digite um segundo valor: ");
    scanf("%d", &y);

    aux = x;
    x = y;
    y = aux;

    printf("\nOs valores foram invertidos e ficaram assim: %d, %d\n\n",x,y);



}
