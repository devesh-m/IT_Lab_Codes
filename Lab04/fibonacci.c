#include <stdio.h>

int fib(int n);//declaring function to find fibonacci terms

int main()
{
    int n;//declaring variable for number of terms
    //asking for number as an input
    printf("enter a number: ");
    scanf("%d",&n);
    //loop to print fibonacci sequence
    for(int i=0;i<n;i++)
    {
        printf("%d\t",fib(i));
    }
    printf("\n");
    return 0;
}

//function to find fibonacci terms
int fib(int n)
{
    if(n==0)//returning 0 if n=0
    {
        return 0;
    }
    else if(n==1)//returning 1 if n=1
    {
        return 1;
    }
    else//returning sum of previous 2 fibonacci terms using return values of funtions when n-1 and n-2 are passed to the function
    {
        return fib(n-1)+fib(n-2);
    }
}

/*enter a number: 7
0       1       1       2       3       5       8*/