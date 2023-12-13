#include <stdio.h>

int main()
{
    float celc;//declaring variable for temperature in celcius
    printf("enter the temperature in celcius: ");//asking for temperature in celcius
    scanf("%f",&celc);//assigning value entered by user to celc
    float fahr=(celc*(9/5))+32;//declaring variable for temperature in fahrenheit and then assigning it a value by using formula for converting celcius to fahrenheit
    printf("it is %f fahrenheit",fahr);//printing the value of temperature in fahrenheit
    return 0;
}


/*Test Case-1
enter the temperature in celcius: 0
it is 32.000000 fahrenheit

Test Case-2
enter the temperature in celcius: 27
it is 59.000000 fahrenheit*/