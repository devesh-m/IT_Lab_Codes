#include <stdio.h>

int main()
{
    float HS,MA,PH,IT,EC;//declaring variables for 5 subjects
    printf("enter the marks for HS,MA,PH,IT and EC out of 100:\n");//asking for marks scored in each subject
    scanf("%f%f%f%f%f",&HS,&MA,&PH,&IT,&EC);//assigning values entered by user to respective variables
    float sum = HS+MA+PH+IT+EC;//declaring variable and storing sum of marks of all 5 subjects
    printf("sum of marks of all subjects is %f\n",sum);//printing the value of sum of marks of 5 subjects
    float perc = sum/5;//declaring and storing value of percentage using formula
    printf("your percentage is %f",perc);//printing value of percentage obtained
    return 0;
}

/*Test Case-1
enter the marks for HS,MA,PH,IT and EC out of 100:
93
92
94
91
95
sum of marks of all subjects is 465.000000
your percentage is 93.000000

Test Case-2
enter the marks for HS,MA,PH,IT and EC out of 100:
95
94
93
94
95
sum of marks of all subjects is 471.000000
your percentage is 94.199997*/