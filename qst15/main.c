#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int a;
    int b;
    char c;

    printf("Digite seu sexo M ou F: ");
    scanf("%c",&c);

    printf("Digite sua idade: ");
    scanf("%d",&a);

    printf("Digite sua contribui��o: ");
    scanf("%d",&b);

    if ((c=='m')&&(a>=65)&&(b>=10))
    {
        printf("Aposent�vel");
    }
    else if ((c=='m')&&(a>=63)&&(b>=15))
    {
        printf("Aposent�vel");
    }
    else if ((c=='f')&&(a>=63)&&(b>=10))
    {
        printf("Aposent�vel");
    }
    else if ((c=='f')&&(a>=61)&&(b>=15))
    {
        printf("Aposent�vel");
    }
    else
    {
        printf("N�o aposent�vel");
    }

}
