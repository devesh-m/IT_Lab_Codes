#include <stdio.h>

int t=0;//declaring variable for doing operations in the code

int rev(int n);//declaring function to reverse number

int main()
{
    int n;//declaring variable for number
    //asking for input of number
    printf("enter a number: ");
    scanf("%d",&n);
    //printing the reversed number which is returned from the function
    printf("reversed number is %d\n",rev(n));
    return 0;
}

//function to reverse the number
int rev(int n)
{
    //condition to run the process if number is greater than 0
    if(n>0)
    {
        //expression that will assign last digit of n to t
        //for example, n=35, then t=0+5=5 
        t=(t*10)+(n%10);
        //funtion call using n/10
        //so if n=35, 3 will be passed to the function again
        rev(n/10);
    }
    else//if n<=0 then it will return t
    {
        return t;
    }
}


/*enter a number: 685329
reversed number is 923586*/