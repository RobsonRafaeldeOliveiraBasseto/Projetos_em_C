#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int x;
    int y;

    printf("Digite um valor para x: ");
    scanf("%d",&x);

    printf("Digite um valor para y: ");
    scanf("%d",&y);

    if((x>0)&&(y>0))
    {
        printf("As coordenadas %dx e %dy são do primeiro quadrante.",x,y);
    }
    else if ((x<0)&&(y>0))
    {
        printf("As coordenadas %dx e %dy são do segundo quadrante.",x,y);
    }
    else if ((x<0)&&(y<0))
    {
        printf("As coordenadas %dx e %dy são do terceiro quadrante.",x,y);
    }
    else if ((x>0)&&(y<0))
    {
        printf("As coordenadas %dx e %dy são do quarto quadrante.",x,y);
    }
    else if ((x==0)&&(y==0))
    {
        printf("As coordenadas %dx e %dy são neutras.",x,y);
    }


}
