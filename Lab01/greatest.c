#include <stdio.h>

int main()
{
    //declaring 3 variables
    int a,b,c;
    //taking values of 3 numbers as input from user
    printf("enter 3 numbers:\n");
    //assigning the 3 input values to the 3 variables a,b and c respectively
    scanf("%d%d%d",&a,&b,&c);
    //condition if all numbers are same
    if(a==b && b==c)
    {
        printf("all numbers are same!");
    }
    //condition if a is greater than b
    else if(a>b)
    {
        //condition if a is greater than c
        if(a>c)
        {
            printf("%d is the greatest number!",a);
        }
        //if c is greater than a
        else
        {
            printf("%d is the greatest number!",c);
        }
    }
    //if b is greater than a
    else
    {
        //if b is greater than c
        if(b>c)
        {
            printf("%d is the greatest number!",b);
        }
        //if c is greater than a
        else
        {
            printf("%d is the greatest number!",c);
        }
    }
    return 0;
}

/*Test Case-1
enter 3 numbers:
55
55
55
all numbers are same!

Test Case-2
enter 3 numbers:
53
62
81
81 is the greatest number!

Test Case-3
enter 3 numbers:
22
22
13
22 is the greatest number!
*/