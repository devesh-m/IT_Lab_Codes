#include <stdio.h>

void hright(int n);
void hdiamond(int n);

int main()
{
    int n;
    printf("enter the number of rows: ");
    scanf("%d",&n);
    printf("hollow triangle:\n");
    hright(n);
    printf("hollow diamond:\n");
    hdiamond(n);
    printf("iso:\n");
    for(int i=1;i<=n;i++)//loop for rows
    {
        for(int s=1;s<=n-i;s++)//loop for number of spaces
        {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++)//loop for number of stars
        {
            printf("*");
        }
        printf("\n");//going to next line
    }
    return 0;
}



void hright(int n)
{
    for(int i=1;i<=n-1;i++)
    {
        if(i==1)
        {
            printf("*\n");
        }
        printf("*");
        for(int s=1;s<i;s++)
        {
            if(i==n-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("*\n");
    }
}

void hdiamond(int n)
{
    for(int i=0;i<=n;i++)
    {
        for(int s=1;s<=n-i;s++)
        {
            printf(" ");
        }
        printf("*");
        for(int s=1;s<=2*i-1;s++)
        {
            printf(" ");
        }
        if(i==0)
        {
            printf("\n");
            continue;
        }
        printf("*\n");
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int s=1;s<=n-i;s++)
        {
            printf(" ");
        }
        printf("*");
        for(int s=2*i-1;s>=1;s--)
        {
            printf(" ");
        }
        if(i==0)
        {
            printf("\n");
            break;
        }
        printf("*\n");
    }
}