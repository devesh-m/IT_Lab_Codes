#include <stdio.h>

int main()
{
    int n;//declaring variable
    int fact=1;//declaring variable for factorial
    printf("enter a number: ");//asking for input
    scanf("%d",&n);//assigning input value to n
    for(int i=n;i>=1;i--)//loop to keep multiplying numbers from 1 to n and assigning it to fact
    {
        fact*=i;
    }
    printf("the factorial of %d = %d",n,fact);//printing the value of factorial
    return 0;
}


/*enter a number: 6
the factorial of 6 = 720*/