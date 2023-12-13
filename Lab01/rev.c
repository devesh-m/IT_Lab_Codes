#include <stdio.h>

int main()
{
    //declaring three varibles
    int a;//number to be reversed
    int _a=0;//revered number
    int i;//temporary variable 
    //taking number as input
    printf("enter a number: ");
    //assigning input to variable a
    scanf("%d",&a);
    //loop that continues till a<=0
    while(a>0)
    {
        //i equals to the remainder of a/10
        i = a%10;
        //_a is multiplied by 10 and added by i, so that after a second digit is added, previous digit has moved one place to the left
        _a = _a*10 + i;
        //a is divided by 10 to get the quotient of the number, so if number is 123, quotient will be 12
        a = a/10;
    }
    //printing the reversed number
    printf("the reversed number is %d",_a);
    return 0;
}


/*Test Case-1
enter a number: 359
the reversed number is 953

Test Case-2
enter a number: 44976
the reversed number is 67944
*/