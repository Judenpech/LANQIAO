#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int isPrime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int cnt=0;
	int a[8]={0,1,2,3,4,5,6,7};
	do{
		if(a[0]==0) continue;
		int sum=0;
		for(int i=0;i<8;i++){
			sum=sum*10+a[i];
		}
		if(isPrime(sum)) cnt++;
	}while(next_permutation(a,a+8));
	cout<<cnt;
	return 0;
}
