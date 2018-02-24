#include <iostream>
using namespace std;
int main(){
	int t,a[25],p=0;
	while(cin>>t && t!=0){
		a[p++]=t;
	}
	for(int i=p-1;i>=0;i--){
		cout<<a[i];
		if(i!=0) cout<<" ";
	}
	return 0;
}
