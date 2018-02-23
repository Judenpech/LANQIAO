#include <iostream>
using namespace std;
int main(){
	int n,cnt,a[25][25];
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0,flag=0;i<n;i++){
		cnt=0;
		for(int j=0;j<n;j++){
			if(i==j) continue;
			if(a[j][i]==1) cnt++;
		}
		if((double)cnt/(n-1)>=0.5){
			if(flag) cout<<" ";
			cout<<i+1;
			flag=1;
		} 
	}
	return 0;
}
