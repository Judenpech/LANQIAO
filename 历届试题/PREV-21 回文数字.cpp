#include <iostream>
using namespace std;
int main(){
	int n,flag=0;
	cin>>n;
	for(int i=10000;i<=99999;i++){
		int a=i/10000;
		int b=i%10000/1000;
		int e=i%1000/100;
		int c=i%100/10;
		int d=i%10;
		if(a==d && b==c && (a+b+c+e+d)==n){
			cout<<i<<endl;
			flag=1;
		} 
	}
	for(int i=100000;i<=999999;i++){
		int a=i/100000;
		int b=i%100000/10000;
		int c=i%10000/1000;
		int d=i%1000/100;
		int e=i%100/10;
		int f=i%10;
		if(a==f && b==e && c==d && (a+b+c+d+e+f)==n){
			cout<<i<<endl;
			flag=1;
		} 
	}
	if(!flag) cout<<-1<<endl;
	return 0;
}
