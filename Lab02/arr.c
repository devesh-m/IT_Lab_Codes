#include <stdio.h>

int main()
{
    int n,temp;//declaring variable for size of array and also a temporary variable
    //asking for size of array as input and assigning input value to n
    printf("enter size of the array: ");
    scanf("%d",&n);
    //declaring an array of size n
    int arr[n];
    //asking for elements of the array
    printf("enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //nested loop for sorting the elements in ascending order
    for(int i=1;i<=n-1;i++)
    {
        for(int j=0;j<=n-i-1;j++)
        {
            if(arr[j]>arr[j+1])//if previous term is greater than next term, both values will be exchanged using temporary variable
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("the largest number is %d",arr[n-1]);//printing the last element of the array
    return 0;
}

/*enter size of the array: 6
enter the elements:
59
36
99
33
74
68
the largest number is 99*/