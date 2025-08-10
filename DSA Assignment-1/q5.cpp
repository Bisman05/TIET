#include<iostream>
using namespace std;
int main(){
    int i,j,row,col,rsum,csum;
    cout<<"Enter row: ";
    cin>>row;
    cout<<"Enter col: ";
    cin>>col;
    int arr[50][50];

    cout<<"Enter elements of the array: ";
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<"("<<i<<","<<j<<"): ";
            cin>>arr[i][j];
        }
    }

    for(i=0;i<row;i++){
        rsum=0;
        for(j=0;j<col;j++) {
            rsum+=arr[i][j];
        }
        cout<<"Row "<<i+1<<" sum= "<<rsum<<endl;
    }
    for(j=0;j<col;j++) {
        csum=0;
        for(i=0;i<row;i++){
            csum+=arr[i][j];
        }
        cout<<"Column"<<j+1<<" sum= "<<csum<<endl;
    }
    return 0;
}

