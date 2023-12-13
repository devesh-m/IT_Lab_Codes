#include <stdio.h>

void rev(int n,int *ptr);//declaring function to reverse the elements of array

int main()
{
    int n;//declaring variable for number of elements
    //asking for number of elements
    printf("enter the size of array: ");
    scanf("%d",&n);
    int arr[n];//declaring array with n elements
    int *ptr=&arr[0];//declaring pointer variable and assigning address of first element to it
    for(int i=0;i<n;i++)//loop for taking input values for elements
    {
        printf("enter element-%d: ",i+1);
        scanf("%d",ptr+i);
    }
    rev(n,ptr);//passing number of elements of array and pointer to rev function
    for(int i=0;i<n;i++)//loop to print values of reversed array elements
    {
        printf("%d\n",*(ptr+i));
    }
    return 0;
}

//function to reverse the elements of array
void rev(int n,int *ptr)
{
    int change;//declaring variable to help interchange values of elements
    for(int i=0;i<n/2;i++)//loop for interchanging elements using pointers
    {
        change=*(ptr+i);//assigning value at ith element to change
        *(ptr+i)=*(ptr+n-1-i);//assigning value of (n-1)th element to value at ith element
        *(ptr+n-i-1)=change;//assigning value of ith element with is stored in change to (n-1)th element
    }
    return;
}

/*enter the size of array: 7
enter element-1: 23
enter element-2: 6
enter element-3: 987
enter element-4: 34
enter element-5: 45
enter element-6: 67
enter element-7: 37
37
67
45
34
987
6
23*/