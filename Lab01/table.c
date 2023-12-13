#include <stdio.h>

int main()
{
    int n;//declaring variable whose table is to be printed
    printf("enter a number: ");//asking for value of n
    scanf("%d",&n);//assigning value entered by user to n
    //below is a loop which will print the product of n and numbers from 1 to 10 one by one
    for(int i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);//printing the product
    }
    return 0;
}


/*Test Case-1
enter a number: 3
3*1=3
3*2=6
3*3=9
3*4=12
3*5=15
3*6=18
3*7=21
3*8=24
3*9=27
3*10=30

Test Case-2
enter a number: 7
7*1=7
7*2=14
7*3=21
7*4=28
7*5=35
7*6=42
7*7=49
7*8=56
7*9=63
7*10=70*/