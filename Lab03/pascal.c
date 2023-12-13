#include <stdio.h>

int fact(int n);
int comb(int i,int s);

int main()
{
    int n;
    printf("enter the number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            printf(" ");
        }
        for(int s=0;s<i;s++)
        {
            printf("%d ",comb(i-1,s));
        }
        printf("\n");
    }
    return 0;
}


int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}

int comb(int i,int s)
{
    return fact(i)/(fact(s)*fact(i-s));
}