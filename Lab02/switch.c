#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b;
    char c;
    printf("enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    printf("enter the operator\n");
    c=getch();
    switch(c)
    {
        case '+' : printf("%d+%d=%d",a,b,a+b);
        break;
        case '-' : printf("%d-%d=%d",a,b,a-b);
        break;
        case '*' : printf("%d*%d=%d",a,b,a*b);
        break;
        case '/' : printf("%d/%d=%d",a,b,a/b);
        break;
        case '%' : printf("%d%%%d=%d",a,b,a%b);
        break;
        default : printf("enter a valid arithmetic operator!");
    }
    return 0;
}