#include <iostream>
#define inf 1000000001
using namespace std;
int main(){
	int n,max=-inf,min=inf,sum=0,t;
	cin>>n;
	while(n--){
		cin>>t;
		sum+=t;
		if(t>max) max=t;
		if(t<min) min=t;
	}
	cout<<max<<endl<<min<<endl<<sum;
	return 0;
}
