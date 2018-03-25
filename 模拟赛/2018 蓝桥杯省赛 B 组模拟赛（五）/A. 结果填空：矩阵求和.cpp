#include <iostream>
#include <cmath>
using namespace std;
int a[1000][1000];
int main(){
	int n;
	cin>>n;
	//n=101;
	int p=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=p++;
		}
	}
	int m=n/2;
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i<=m && j>=m-i && j<=m+i){
				sum+=a[i][j];
			}else if(i>m && j>=m-(n-i-1) && j<=m+(n-i-1)){
				sum+=a[i][j];
			}
		}
	}
	cout<<sum;
	return 0;
}
