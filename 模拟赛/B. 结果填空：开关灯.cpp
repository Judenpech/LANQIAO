#include <iostream>
#include <cstring>
using namespace std;
int a[1005];
int main(){
	for(int i=1;i<=1000;i++){
		a[i]=1;
	}
	int f=-1;
	for(int i=1;i<=1000;i++){
		if(i%3==0) a[i]=f*a[i];
	}
	for(int i=1;i<=1000;i++){
		if(i%5==0) a[i]=f*a[i];
	}
	for(int i=1;i<=1000;i++){
		if(i%7==0) a[i]=f*a[i];
	}
	int cnt=0;
	for(int i=1;i<=1000;i++){
		if(a[i]==1) cnt++;
	}
	cout<<cnt;
	return 0;
}
