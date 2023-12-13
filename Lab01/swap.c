#include <stdio.h>

int main()
{
    //declaring 2 varibles
    int a,b;
    //asking for input values to the variables
    printf("enter 2 numbers:\n");
    //assigning input values to variables a and b respectively
    scanf("%d%d",&a,&b);
    //printing values of a and b before the swap
    printf("before swap, (a,b)=(%d,%d)\n",a,b);
    /*process of swapping:
    let a=13 and b=5
    assigning value of difference a-b to a will result in a=8
    now assigning value of sum a+b to b will result in b=8+5=13
    now assigning value of a to b-a so a=13-8=5*/
    a = a-b;
    b = b+a;
    a = (b-a);
    //printing values of a and b after the swap
    printf("after swap, (a,b)=(%d,%d)\n",a,b);
    return 0;
}


/*Test Case-1
enter 2 numbers:
2
7
before swap, (a,b)=(2,7)
after swap, (a,b)=(7,2)

Test Case-2
enter 2 numbers:
19
36
before swap, (a,b)=(19,36)
after swap, (a,b)=(36,19)
*/