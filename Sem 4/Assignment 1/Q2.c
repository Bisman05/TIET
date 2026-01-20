#include<stdio.h>
void merge(int arr[], int low, int mid, int high)
{
    int i=low,j=mid+1,k=low;
    int temp[50];

    while(i<=mid&&j<=high)
    {
        if (arr[i]<arr[j])
            temp[k++]=arr[i++];
        else
            temp[k++]=arr[j++];
    }

    while(i<=mid)
        temp[k++]=arr[i++];

    while(j<=high)
        temp[k++]=arr[j++];

    for (i=low;i<=high;i++)
        arr[i]=temp[i];
}

void mergeSort(int arr[], int low, int high)
{
    int mid;
    if (low<high)
    {
        mid=(low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

void printArray(int arr[],int n)
{
    for (int i=0;i<n;i++)
        printf("%d",arr[i]);
    printf("\n");
}

int main()
{
    int arr[]={12,11,13,5,6,7};
    int arr2[]={38,27,43,3,9,82,10};

    int n1=6,n2=7;

    mergeSort(arr,0,n1-1);
    mergeSort(arr2,0,n2-1);

    printf("Sorted first array: ");
    printArray(arr,n1);

    printf("Sorted second array: ");
    printArray(arr2,n2);

    return 0;
}
