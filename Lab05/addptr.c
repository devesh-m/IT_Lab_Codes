#include <stdio.h>

//function to add two integers using pointers
int add(int *A,int *B)
{
    return *A+*B;//returning sum of values at addresses stored at pointers A and B
}

int main()
{
    int a,b;//declaring 2 variables
    int *A=&a,*B=&b;//declaring 2 pointer variables and assigning them addresses of a and b
    //asking for values of a and b
    printf("enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    printf("%d+%d=%d",a,b,add(A,B));//printing sum a+b from return value of function add
    return 0;
}