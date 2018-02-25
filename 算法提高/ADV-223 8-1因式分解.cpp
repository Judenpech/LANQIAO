#include <iostream>
#include <cmath>
using namespace std;

int isPrime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int n,flag=0;
	cin>>n;
	while(n!=1){
		for(int i=2;i<=n;i++){
			if(isPrime(i) && n%i==0){
				if(flag) cout<<"*";
				n/=i;
				cout<<i;
				flag=1;
				break;
			}
		}
	}
	return 0;
}
