#include <iostream>
#include <cmath>
using namespace std;
int isPrime(long long n){
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	long long sum=0;
	for(long long i=10234567;i<=76543210;i++){
		long long t=i;
		int cnt=0;
		int flag=0;
		while(t!=0){
			if(t%10==8 || t%10==9){
				flag=1;
				break;
			}
			cnt+=t%10;
			t/=10;
		}
		if(flag) continue;
		if(cnt==28){
			if(isPrime(i)) sum++;
		} 
	}
	cout<<sum;
	return 0;
}
