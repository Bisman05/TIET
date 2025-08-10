#include<iostream>
using namespace std;
int main(){
	int i,j,m,n;
	cout<<"Enter m and n for matrix: ";
	cin>>m;
	cin>>n;
	int arr[m][n],trans[n][m];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<"Enter "<<i<<","<<j<<": ";
			cin>>arr[i][j];
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			trans[j][i]=arr[i][j];
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<trans[i][j];
		}
		cout<<endl;
	}
	return 0;
}
