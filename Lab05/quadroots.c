#include <stdio.h>
#include <math.h>//including math.h header file to use it's functions

//function to find roots of given quadratic equation
void rootsref(int a,int b,int c,float *A,float *B)
{
    if((b*b)<(4*a*c))//condition for quadratic equation to have no real roots
    {
        printf("no real roots!");
        return;
    }
    //assigning values of roots(using quadratic formula) to their pointers
    *A=(-b+sqrt(b*b-4*a*c))/2*a;
    *B=(-b-sqrt(b*b-4*a*c))/2*a;
    return;
}

void rootsval(int a,int b,int c,float r1,float r2)
{
    if((b*b)<(4*a*c))//condition for quadratic equation to have no real roots
    {
        printf("no real roots!");
        return;
    }
    //assigning values of roots(using quadratic formula) to their pointers
    r1=(-b+sqrt(b*b-4*a*c))/2*a;
    r2=(-b-sqrt(b*b-4*a*c))/2*a;
    if((b*b)>=(4*a*c))//condition for the equation to have real roots
    {
        printf("the roots of %dx^2+%dx+%d=0 are : %f and %f\n",a,b,c,r1,r2);//printing roots of the given quadratic equation
    }
    return;
}

int main()
{
    int a,b,c;//declaring variables for coefficients of x^2,x and a constant
    //asking values of coefficients and the constant as input
    printf("enter values of a,b and c from ax^2+bx+c=0:\n");
    scanf("%d%d%d",&a,&b,&c);
    float r1,r2;//declaring variables to store roots of the quadratic equation
    float *R1=&r1,*R2=&r2;//declaring pointer variables to store addresses of root variables
    printf("Call by Reference:\n");
    rootsref(a,b,c,R1,R2);//function call by reference using coefficients and the constant of the equation, also paasing pointers of roots
    if((b*b)>=(4*a*c))//condition for the equation to have real roots
    {
        printf("the roots of %dx^2+%dx+%d=0 are : %f and %f\n",a,b,c,*R1,*R2);//printing roots of the given quadratic equation
    }
    printf("Call by Value:\n");
    rootsval(a,b,c,r1,r2);//function call by value using coefficients and the constant of the equation, also paasing pointers of roots
    return 0;
}

/*enter values of a,b and c from ax^2+bx+c=0:
1
3
2
Call by Reference:
the roots of 1x^2+3x+2=0 are : -1.000000 and -2.000000
Call by Value:
the roots of 1x^2+3x+2=0 are : -1.000000 and -2.000000*/