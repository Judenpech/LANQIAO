#include <iostream>
using namespace std;
int main(){
	int k,n,a=1,b=1;
	cin>>k>>n;
	for(int i=0;i<k;i++){
		a*=n--;
	}
	while(k!=0){
		b*=k--;
	}
	cout<<a/b;
	return 0;
}
