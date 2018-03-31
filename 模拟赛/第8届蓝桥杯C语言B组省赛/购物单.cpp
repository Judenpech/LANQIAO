#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	double a,b,sum=0;
	int n=50;
	char buf[1000];
	while(n--){
		cin>>a>>b;
		sum+=a*b/100;
	}
	printf("%lf",sum);
	return 0;
}
