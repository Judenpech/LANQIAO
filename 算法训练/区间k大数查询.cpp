#include <iostream>
#include <string.h>
#include <algorithm>
#define def 1000
using namespace std;
int main(){
	int a[def]={0},b[def];
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>m;
	int l,r,k;
	while(m--){
		memset(b,0,sizeof(b));
		cin>>l>>r>>k;
		for(int i=0,j=l-1;j<r;i++,j++){
			b[i]=a[j];
		}
		sort(b,b+(r-l+1));
		cout<<b[r-l+1-k]<<endl;
	}
	return 0;
}
