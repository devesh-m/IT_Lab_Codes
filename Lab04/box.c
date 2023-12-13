#include <stdio.h>

int j=0;//declaring temporary variable to be used in the function 

void box(int n);//declaring function to print a square of #

int main()
{
    int n;//declaring variable for side length of square
    //asking for input of side length
    printf("enter the side length of the box to be printed: ");
    scanf("%d",&n);
    box(n);//passing value of n to box function
    return 0;
}

//function to print square box
void box(int n)
{
    if(n==0)//returning if n==0
    {
        return;
    }
    for(int i=1;i<=n+j;i++)//loop for printing # in a row
    {
        printf("#");
    }
    printf("\n");//entering next line
    j++;
    box(n-1);//passing n-1 to function to print # of next row and this will go on till n==1
}

/*enter the side length of the box to be printed: 5
#####
#####
#####
#####
#####*/