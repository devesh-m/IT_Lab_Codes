#include <stdio.h>

int main()
{
    int n;//declaring variable for year
    printf("enter a year: ");//asking for value of year from user
    scanf("%d",&n);//assigning value entered by user to n
    //if statement with condition for leap year
    if((n%4==0 && n%100!=0) ||n%400==0)
    {
        printf("it is a leap year!\n");//if condition is true it is leap year
    }
    else
    {
        printf("it is not a leap year!\n");//if condition is false it is not a leap year
    }
    return 0;
}

/*Test Case-1
enter a year: 2100
it is not a leap year!

Test Case-2
enter a year: 2000
it is a leap year!*/