#include <stdio.h>

int main()
{
    float r;//declaring variable for radius of circle
    float pi=3.14;//declaring value of pi
    printf("enter the length of radius: ");//asking for value of radius
    scanf("%f",&r);//assigning value entered by user to r
    printf("area of the circle is = %f\n",pi*r*r);//printing area of circle using formula
    printf("circumference of the circle is = %f\n",2*pi*r);//printing circumference of circle using formula
    return 0;
}


/*Test Case-1
enter the length of radius: 5
area of the circle is = 78.500003
circumference of the circle is = 31.400001

Test Case-2
enter the length of radius: 17
area of the circle is = 907.460030
circumference of the circle is = 106.760004
*/