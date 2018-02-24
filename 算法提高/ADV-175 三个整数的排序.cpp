#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(c>b){
		c=b+c;
		b=c-b;
		c=c-b;
	}
	if(b>a){
		a=a+b;
		b=a-b;
		a=a-b;
	}
	if(c>b){
		c=b+c;
		b=c-b;
		c=c-b;
	}
	cout<<a<<" "<<b<<" "<<c<<endl;
	return 0;
}
