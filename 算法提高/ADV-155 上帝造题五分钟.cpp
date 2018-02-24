#include <iostream>
using namespace std;
int a[2000];
int main(){
	int n,q;
	cin>>n>>q;
	for(int i=0;i<n;i++) cin>>a[i];
	int lo,hi,min;
	while(q--){
		cin>>lo>>hi;
		min=lo;
		for(int i=lo+1;i<=hi;i++){
			if(a[i]<a[min]) min=i;
		}
		cout<<a[min]<<endl;
	}
	return 0;
}
