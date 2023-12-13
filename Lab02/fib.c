#include <stdio.h>

int fibo(int n);//declaring function to return the fibonacci numbers

int main()
{
    for(int i=0;fibo(i)<=100;i++)//loop that runs till ane fibonacci term is greater than 100
    {
        printf("%d\t",fibo(i));//printing the value of fibonacci term
    }
    return 0;
}

int fibo(int n)//funtion to return values of fibonacci terms
{
    if(n==0)//returns 0 if it is first term
    {
        return 0;
    }
    if(n==1)//returns 1 if it is the second term
    {
        return 1;
    }
    else//returns value equal to sum of previous 2 terms
    {
        return fibo(n-1)+fibo(n-2);
    }    
}


/*0       1       1       2       3       5       8       13      21      34      55      89*/