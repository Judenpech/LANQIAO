#include <iostream>
using namespace std;

const int inf=1000009;
int main(){
	int n,t,max=-inf,min=inf;
	cin>>n;
	while(n--){
		cin>>t;
		if(t>max) max=t;
		if(t<min) min=t;
	}
	cout<<max<<" "<<min<<endl;
	return 0;
}
