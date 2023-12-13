#include <stdio.h>

int fact(int n);//declaring function to find factorial

int main()
{
    int n;//declaring variable for number
    //taking number as input
    printf("enter a number: ");
    scanf("%d",&n);
    printf("factorial of %d is %d\n",n,fact(n));//printing factorial of the number using return value of the function
    return 0;
}

//function to find factorial of a number
int fact(int n)
{
    if(n==1)//returning 1 if n==1
    {
        return 1;
    }
    else//returning product of n and return value of fact(n-1) if n!=1
    {
        return n*fact(n-1);
    }
}

/*enter a number: 6
factorial of 6 is 720*/