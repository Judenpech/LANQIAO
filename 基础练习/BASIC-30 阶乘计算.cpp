#include <iostream>
using namespace std;

int main(){
	int n,t,len=1;
	cin>>n;
	int *a=new int[n];
	a[0]=1;
	for(int i=1;i<=n;i++){
		t=0;
		for(int j=0;j<len;j++){
			a[j]=a[j]*i+t;
			t=a[j]/10;
			a[j]=a[j]%10;
			if(t!=0 && j==len-1){
				a[j+1]=0;
				len++;
			} 
		}
	}
	for(int i=len-1;i>=0;i--){
		cout<<a[i];
	}
	return 0;
}
