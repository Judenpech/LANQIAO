#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=10000;i<=99999;i++){
		int a=i/10000;
		int b=i%10000/1000;
		int e=i%1000/100;
		int c=i%100/10;
		int d=i%10;
		if(a==d && b==c && (a+b+c+e+d)==n) cout<<i<<endl;
	}
	for(int i=100000;i<=999999;i++){
		int a=i/100000;
		int b=i%100000/10000;
		int c=i%10000/1000;
		int d=i%1000/100;
		int e=i%100/10;
		int f=i%10;
		if(a==f && b==e && c==d && (a+b+c+d+e+f)==n) cout<<i<<endl;
	}
	return 0;
}
