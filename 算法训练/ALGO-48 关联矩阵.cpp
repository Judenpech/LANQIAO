#include <iostream>

using namespace std;
int arr[105][1005]={0};
int main(){
	int n,m,a,b;
	cin>>n>>m;
	for(int i=0,p=1;i<m;i++){
		cin>>a>>b;
		arr[a][p]=1;
		arr[b][p++]=-1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(j!=0) cout<<" ";
			cout<<arr[i][j];
		}
		cout<<endl;
	}
	return 0;
}
