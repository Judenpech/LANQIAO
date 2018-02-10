#include <iostream>
#include <cstring>
#define def 100000
using namespace std;
int CompactIntegers(int a[],int len){
	int b[def],retn=len;
	for(int i=0,j=0;i<len;i++){
		if(a[i]!=0){
			b[j++]=a[i];
		}else retn--;
	}
	memcpy(a,b,sizeof(b));
	return retn;
}
int main(){
	int n,a[def];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int afterDelete=CompactIntegers(a,n);
	cout<<afterDelete<<endl;
	for(int i=0;i<afterDelete;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
