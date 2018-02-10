#include <iostream>
using namespace std;
int main(){
	int a,b,r;
	cin>>a>>b;
	int m=a,n=b;
	r=a%b;
	while(r!=0){
		a=b;
		b=r;
		r=a%b;
	}
	cout<<m*n/b;
	return 0;
}
