#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[]  = {900, 910, 920, 1100, 1120};
    int dept[] = {940, 1200, 950, 1130, 1140};

  
    sort(arr, arr+n);
    sort(dept, dept+n);
    int plat=1;
    int maxplat=1;
    int i=1;
    int j=0;

    while(i<n && j<n){
        if(arr[i]<=dept[j]){
            plat++;
            i++;
        }
        else{
            plat--;
            j++;
        }
        if(plat>maxplat){
            maxplat=plat;
        }
    }

    cout << "Min platforms req = " << maxplat;
    return 0;
}
