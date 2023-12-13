#include <stdio.h>
#include <math.h>

int main()
{
    int n;//declaring variable
    printf("enter a number: ");//asking for input
    scanf("%d",&n);//assigning input value to n
    int flag=0;//declaring another variable flag and assigning a value of 0
    for(int i=2;i<=sqrt(n);i++)//loop that runs till i>sqrt of n
    {
        if(n==2)//condition if n=2 
        {
            flag=2;//assinging value of flag to 2
            break;
        }
        if(n%i==0)//condition if i completely divides n
        {
            flag=1;//assigning value of flag to 1
            break;
        }
    }
    if(flag==1)//condition if value of flag is 1
    {
        printf("%d is not a prime number",n);//printing that n is not prime
    }
    else
    {
        printf("%d is a prime number",n);//printing that n is prime
    }
}

/*enter a number: 23
23 is a prime number*/