#include <stdio.h>

void rev(int n,int *ptr);

int main()
{
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    //int *ptr=&arr[0];
    for(int i=0;i<n;i++)
    {
        printf("enter element-%d: ",i+1);
        scanf("%d",arr+i);
    }
    rev(n,arr);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",*(arr+i));
    }
    return 0;
}

void rev(int n,int *arr)
{
    int change;
    for(int i=0;i<n/2;i++)
    {
        change=*(arr+i);
        *(arr+i)=*(arr+n-1-i);
        *(arr+n-i-1)=change;
    }
    return;
}