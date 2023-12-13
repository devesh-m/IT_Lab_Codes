#include <stdio.h>

int main()
{
    int n;//decaring variable for number of elements
    //asking for number of elements
    printf("enter the size of array: ");
    scanf("%d",&n);
    int arr[n];//declaring array of n elements
    int *ptr=&arr[0];//declaring pointer and assigning address of 1st element to it
    for(int i=0;i<n;i++)//loop for taking elements as input
    {
        printf("enter element-%d: ",i+1);
        scanf("%d",ptr+i);
    }
    int *max=&arr[0],*min=&arr[0];//declaring pointer variables for minimum and maximum value, assigning address of first element to them
    float sum=0;//declaring variable for sum of all elements
    for(int i=0;i<n;i++)//loop to check for different conditions for every element
    {
        if(*(ptr+i)>*max)//condition if element is greater than value stored in pointer variable max
        {
            max=ptr+i;//assigning address of element to max
        }
        if(*(ptr+i)<*min)//condition if element is smaller than value stored in pointer variable min
        {
            min=ptr+i;//assigning address of element to min
        }
        sum+=*(ptr+i);//adding value of element to sum
    }
    //printing minimum and maximum values along with average of all elements
    printf("the minimum is %d, the maximum is %d and average of all numbers is %f",*min,*max,sum/n);
    return 0;
}

/*enter the size of array: 6
enter element-1: 2
enter element-2: 4
enter element-3: 6
enter element-4: 8
enter element-5: 10
enter element-6: 12
the minimum is 2, the maximum is 12 and average of all numbers is 7.000000*/