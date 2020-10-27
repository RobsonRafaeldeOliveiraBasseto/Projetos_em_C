#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    int z;

    int a;
    int b;
    int c;

    printf("Digite o dia: ");
    scanf("%d",&x);

    printf("Digite o mês: ");
    scanf("%d",&y);

    printf("Digite o ano: ");
    scanf("%d",&z);


    printf("Digite o dia: ");
    scanf("%d",&a);

    printf("Digite o mês: ");
    scanf("%d",&b);

    printf("Digite o ano: ");
    scanf("%d",&c);

    if ((z>c)&&(y>b)&&(x>a))
    {
        printf("A maior data é %d/%d/%d",x,y,z);
    }
    else if ((z==c)&&(y>b)&&(x>a))
    {
        printf("A maior data é %d/%d/%d",x,y,z);
    }
    else if ((z==c)&&(y==b)&&(x>a))
    {
        printf("A maior data é %d/%d/%d",x,y,z);
    }
    else if ((z==c)&&(y==b)&&(x==a))
    {
        printf("A maior data é %d/%d/%d",x,y,z);
    }


    else if ((c>z)&&(b>y)&&(a>x))
    {
        printf("A maior data é %d/%d/%d",a,b,c);
    }
    else if ((c==z)&&(b>y)&&(a>x))
    {
        printf("A maior data é %d/%d/%d",a,b,c);
    }
    else if ((c==z)&&(b==y)&&(a>x))
    {
        printf("A maior data é %d/%d/%d",a,b,c);
    }
    else if ((c==z)&&(b==y)&&(a==x))
    {
        printf("A maior data é %d/%d/%d",a,b,c);
    }








}
