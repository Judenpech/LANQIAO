#include <iostream>
using namespace std;
int fuc(int n){
	int a[2]={1,1};
	if(n<2) return a[n];
	int f1=1,f2=0;
	int num=0;
	for(int i=2;i<=n;i++){
		num=(f1+f2)%10007;
		f2=f1;
		f1=num;
	}
	return num;
}
int main(){
	int n;
	cin>>n;
	cout<<fuc(n);
	return 0;
}
