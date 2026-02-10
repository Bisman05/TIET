#include<iostream>
using namespace std;
int main(){
    int n=3;
    int w=50;

    int val[]={100,60,120};
    int wt[]={20,10,40};

    int ratio[3];
    for(int i=0;i<n;i++){
        ratio[i]=val[i]/wt[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=1+i;j<n;j++){
            if(ratio[i]<ratio[j]){
                swap(ratio[i],ratio[j]);
                swap(val[i],val[j]);
                swap(wt[i],wt[j]);
            }
        }
    }
    int tot=0;
    int cap=w;
    for(int i=0;i<n;i++){
        if(wt[i]<=cap){
            tot+=val[i];
            cap-=wt[i];
        }
        else{
            tot+=val[i]*((double)cap/wt[i]);
            break;
        }
    }
    cout<<"max val "<<tot;
    return 0;
}
