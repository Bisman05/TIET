#include<stdio.h>
int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = 10, target = 23;
    int low = 0, high = n-1, mid;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            printf("Target found at index %d", mid);
            return 0;
        }
        else if (target < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    printf("Target not found");
    return 0;
}





