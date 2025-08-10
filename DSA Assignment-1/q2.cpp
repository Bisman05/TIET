#include<iostream>
using namespace std;
int main(){
    int arr[20],n,i,j,k;
    cout<<"Enter n: ";
    cin>>n;
    
    for(i=0;i<n;i++){
    	cout<<"Enter element "<<i+1<<" ";
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++) {
            if(arr[i]==arr[j]) {
                for(k=j;k<n-1;k++) {
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("New array elements: ");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}

