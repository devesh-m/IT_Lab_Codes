#include <stdio.h>

int main()
{
    int a,b;//declaring variables for 2 numbers
    char c;//declaring variable for operation on numbers
    printf("enter the expression\n");//asking for expression as input
    scanf("%d%c%d",&a,&c,&b);//assigning the values of the 2 numbers to a and b, and operation to c
    switch(c)//switch cases for different inputs of c
    {
        case '+' : printf("%d+%d=%d",a,b,a+b);//case for addition
        break;
        case '-' : printf("%d-%d=%d",a,b,a-b);//case for subtraction
        break;
        case '*' : printf("%d*%d=%d",a,b,a*b);//case for multiplication
        break;
        case '/' : printf("%d/%d=%d",a,b,a/b);//case for division
        break;
        case '%' : printf("%d%%%d=%d",a,b,a%b);//case for modulus(remainder)
        break;
        default : printf("enter a valid arithmetic operator!");//default case if any other character is given as input
    }
    return 0;
}


/*enter the expression
99%15
99%15=9*/