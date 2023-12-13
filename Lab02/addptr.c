#include <stdio.h>

int main()
{
    int a,b;//declaring two variables
    int *A = &a;//pointer variable A is address of numbers stored a
    int *B = &b;//pointer variable B is address of numbers stored b
    printf("enter 2 numbers:\n");//asking for input
    scanf("%d%d",&a,&b);//assigning input values to a and b
    *A = *A + *B;//value at pointer A is assigned to sum of values at pointer A and B
    printf("%d",*A);//printing value at pointer A
    return 0;
}

/*enter 2 numbers:
56
93
149*/