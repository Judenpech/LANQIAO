#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
const int maxn=10001;
int p[maxn];
int isPrime(int n){
	if(n==1) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int a,b;
	cin>>a>>b;
	memset(p,0,sizeof(p));
	for(int i=2;i<=b;i++){
		if(isPrime(i)) p[i]=1;
	}
	int t;
	for(int i=a;i<=b;i++){
		printf("%d=",i);
		t=i;
		while(t!=1){
			for(int j=2;j<=i;j++){
				if(t==j){
					cout<<j;
					t/=j;
					break;
				}
				if(p[j]==1 && t%j==0){
					cout<<j<<"*";
					t/=j;
					break;
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
