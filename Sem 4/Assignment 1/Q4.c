#include<stdio.h>
int maxSubArraySum(int arr[],int n){
    int current_sum=arr[0];
    int max_sum=arr[0];

    for (int i=1;i<n;i++){
        if(current_sum+arr[i]>arr[i])
            current_sum=current_sum+arr[i];
        else
            current_sum=arr[i];

        if (current_sum>max_sum)
            max_sum=current_sum;
    }
    return max_sum;
}
int main(){
    int arr[]={-2,-5,6,-2,-3,1,5,-6};
    int n =8;

    printf("Maximum subarray sum = %d",maxSubArraySum(arr,n));
    return 0;
}

