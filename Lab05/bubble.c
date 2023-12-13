#include <stdio.h>

//function to sort using bubble sort method
void bubble(int *arr,int n)
{
    int change;//declaring variable to help interchange values of array elements
    for(int p=0;p<n;p++)//loop for number of passes
    {
        for(int c=0;c<n-p-1;c++)//loop for comparing consecutive elements of the array
        {
            if(*(arr+c)>*(arr+c+1))//condition to interchange elements if the previous element is greater than next element
            {
                change=*(arr+c);
                *(arr+c)=*(arr+c+1);
                *(arr+c+1)=change;
            }
            else
            {
                continue;
            }
        }
    }
}

int main()
{
    int n;//declaring variable for number of elements of the array
    //asking for input of n
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];//declaring array of size n
    for(int i=0;i<n;i++)//loop to ask for elements for input
    {
        printf("enter element-%d: ", i+1);
        scanf("%d",arr+i);
    }
    bubble(arr,n);//function call using array and number of elements
    //printing the sorted array
    printf("the sorted array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("element-%d= %d\n",i+1,*(arr+i));
    }
    return 0;
}

/*enter the size of the array: 7
enter element-1: 34
enter element-2: 75
enter element-3: 23
enter element-4: 97
enter element-5: 42
enter element-6: 09
enter element-7: 34
the sorted array is:
element-1= 9
element-2= 23
element-3= 34
element-4= 34
element-5= 42
element-6= 75
element-7= 97*/