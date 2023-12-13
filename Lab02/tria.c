#include <stdio.h>

//declaring functions to print different types of triangles
void right1(int n);
void right2(int n);
void iso(int n);
void hright(int n);
void hdiamond(int n);

int main()
{
    int n;//declaring variable for number of rows
    //asking for input for number of rows and assigning given input to n
    printf("enter the number of rows of stars: ");
    scanf("%d",&n);
    //printing first right triangle
    printf("right triangle-1:\n");
    right1(n);
    //printing second right triangle
    printf("right triangle-2:\n");
    right2(n);
    //printing isosceles triangle
    printf("isosceles triangle:\n");
    iso(n);
    //printing hollow right triangle
    printf("hollow triangle:\n");
    hright(n);
    //printing hollow diamond
    printf("hollow diamond:\n");
    hdiamond(n);
    return 0;
}

void right1(int n)
{
    for(int i=n;i>=1;i--)//loop for rows
    {
        for(int j=1;j<=i;j++)//loop for number of stars
        {
            printf("*");
        }
        printf("\n");//going to next line
    }
}

void right2(int n)
{
    for(int i=1;i<=n;i++)//loop for rows
    {
        for(int j=1;j<=i;j++)//loop for number of stars
        {
            printf("*");
        }
        printf("\n");//going to next line
    }
}

void iso(int n)
{
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
}

void hright(int n)
{
    for(int i=1;i<=n-1;i++)//loop for rows
    {
        if(i==1)
        {
            printf("*\n");//first star of triangle
        }
        printf("*");//first star of each row
        for(int s=1;s<i;s++)//loop for printing spaces/stars
        {
            if(i==n-1)//if it is the last row it will print only stars instead of spaces
            {
                printf("*");
            }
            else//if it is not the last row it will print spaces in between the first and last star of each row
            {
                printf(" ");
            }
        }
        printf("*\n");//printing the last star of each row and entering the next line
    }
}

void hdiamond(int n)
{
    for(int i=0;i<=n;i++)//loop for rows of top half of diamond
    {
        for(int s=1;s<=n-i;s++)//loop for spaces before first star of each row
        {
            printf(" ");
        }
        printf("*");//printing first star of each row
        for(int s=1;s<=2*i-1;s++)//loop for printing spaces between the first star and the second star
        {
            printf(" ");
        }
        if(i==0)//if it is first row, it will go to the next line and continue to run the loop
        {
            printf("\n");
            continue;
        }
        printf("*\n");//printing last star of each row
    }
    for(int i=n-1;i>=0;i--)//loop for rows of bottom half of diamond
    {
        for(int s=1;s<=n-i;s++)//loop for spaces before first star of each row
        {
            printf(" ");
        }
        printf("*");//printing first star of each row
        for(int s=2*i-1;s>=1;s--)//loop for printing spaces between the first star and the second star
        {
            printf(" ");
        }
        if(i==0)//if it is last row, it will go to the next line and break the loop
        {
            printf("\n");
            break;
        }
        printf("*\n");//printing last star of each row
    }
}

/*enter the number of rows of stars: 7
right triangle-1:
*******
******
*****
****
***
**
*
right triangle-2:
*
**
***
****
*****
******
*******
isosceles triangle:
      *
     ***
    *****
   *******
  *********
 ***********
*************
hollow triangle:
*
**
* *
*  *
*   *
*    *
*******
hollow diamond:
       *
      * *
     *   *
    *     *
   *       *
  *         *
 *           *
*             *
 *           *
  *         *
   *       *
    *     *
     *   *
      * *
       *
*/