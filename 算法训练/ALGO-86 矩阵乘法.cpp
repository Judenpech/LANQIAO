#include <iostream>
#define maxn 205
using namespace std;
int main(){
	int m,s,n;
	cin>>m>>s>>n;
	int a[maxn][maxn],b[maxn][maxn];
	for(int i=0;i<m;i++){
		for(int j=0;j<s;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<s;i++){
		for(int j=0;j<n;j++){
			cin>>b[i][j];
		}
	}
	int sum;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			sum=0;
			for(int k=0;k<s;k++){
				sum+=a[i][k]*b[k][j];
			}
			if(j!=0) cout<<" ";
			cout<<sum;
		}
		cout<<endl;
	}
	return 0;
}
