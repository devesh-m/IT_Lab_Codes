#include <stdio.h>

int main()
{
    int a;//declaring variable
    printf("enter a number: ");//asking for input
    scanf("%d",&a);//assigning input value to variable
    printf("number before shift = %d\n",a);//printing number before shift
    printf("number with left shift by 2 bits = %d\n",a<<2);//printing number with left shift by 2 bits
    printf("number with right shift by 2 bits = %d\n",a>>2);//printing number with right shift by 2 bits
    return 0;
}


/*enter a number: 7
number before shift = 7
number with left shift by 2 bits = 28
number with right shift by 2 bits = 1*/