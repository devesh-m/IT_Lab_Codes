#include <stdio.h>

int sum=0;//declaring variable for sum of numbers

int add(int n);//declaring function to add the numbers

int main()
{
    int n;//declaring variable for number
    //asking for input of number
    printf("enter a number: ");
    scanf("%d",&n);
    printf("sum of numbers till %d=%d",n,add(n));//printing sum of natural numbers till n using return value of add(n)
    return 0;
}

//function to add n numbers
int add(int n)
{
    if(n==1)//condition to return sum+1 if n==1
    {
        return sum+1;
    }
    sum+=n;//adding n to sum
    add(n-1);//passing n-1 to add function
}

/*enter a number: 5
sum of numbers till 5=15*/