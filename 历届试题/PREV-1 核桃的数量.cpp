#include <iostream>
using namespace std;
int fuc(int a,int b){
	int m=a,n=b;
	int r=a%b;
	while(r!=0){
		a=b;
		b=r;
		r=a%b;
	}
	return m*n/b;
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b){
		a=a+b;
		b=a-b;
		a=a-b;
	}
	if(b>c){
		b=b+c;
		c=b-c;
		b=b-c;
	}
	if(a>b){
		a=a+b;
		b=a-b;
		a=a-b;
	}
	cout<<fuc(fuc(a,b),c)<<endl;
	return 0;
}
